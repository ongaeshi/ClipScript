# ClipScript仕様
## TODO
- (DONE) 何か時間がずれてる
- (DONE) 動くclipのサンプルを書く
  - 1秒かけて上に伸びる矢印とかどうか
  - 多分タイムラインで動かすと再現性がない、↓の実装が必要
- (DONE) 子を生成したときはマイナス時間から始める？
  - 基本的には親の target_time で射出したという前提でよい
  - @time = parent.target_time - parent.time でOK?
  - そのあと delta_time で update すれば意図的に辻褄が会うはず？
- (DONE) 停止中はプロセスを毎F動かさない
  - 正方向への移動は0からやらずに現在Fから目標時間に向けてのdelta_time
  - 負のときは仕方ないので0から目標deltaに向かって
- デバッグどうやってやろう
  - 位置指定の文字出力があればいいのでは
  - タイムラインで進行方向に進むときにちょっとずつ表示がでればよさそう
  - 矢印キーでステップ実行とか

## 疑似コード ver2 (コンストラクタにparentを渡す)
- 座標系を表現するには TransformClip の概念が必要
  - そんなことないや、parentが指定オブジェクトなことを前提に取得すればいいだけだ
  - ClipObject自体は座標系を提供しなくてよい
- ClipManagerがRootのClipScriptであればよいのか？
- ClipMangerがそれぞれ子を管理するのは生成したクリップ全てに対して一括操作するため
  - clsとか
  - 

```ruby
class RootClip  # Not ClipObject(ダックタイピングする)
  @children = []

  def add_clip(child)
    @children.add(child)
  end

  def update(delta_time)
    @children.each {|e| e.update(delta_time) }
  end

  def draw
    @children.each {|e| e.draw }
  end
end

class ClipObject 
  def initialize(parent)
    @parent = parent
    @parent.add_clip(self)
    @children = []
    @time = 0.0
    @rate = 1.0 # あると楽しそう
  end

  def add_clip(child)
    @children.add(child)
  end

  def update(delta_time)
    # 子クリップを更新
    @children.each {|e| e.update(delta_time) }

    # 自身と子クリップどちらを先に再生する？
    # 生成したフレームではまだ子クリップを動かしたくない気がするので子クリップ→自身の順で
    @time += delta_time　　# ここで delta_time * @rate にすれば再生レートが更新できる

    # @fiberがある場合は更新
    if @fiber && @fiber.alive?
      @fiber.resume
    end
  end

  def draw
    # デフォルト実装は子に伝搬するだけ
    # LineClipのような描画専用クリップはオーバーライドしてしまってよい(子供いないし)
    @children.each {|e| e.draw }
  end

  def set_script(&block)
    @block = block  # 再起動用にblockを保持
    @fiber = Fiber.new { @block.call(self) }
  end

  def reset()
    @children = []  # 子クリップがあれば空に
    @fiber = Fiber.new { @block.call(self) } if @block  # ファイバー再生成
  end

  def wait(sec)
    target_time = @time + sec

    loop do
      break if @time >= target_time
      Fiber.yield
    end
  end

  def target_time(target_time)
    loop do
      break if @time >= target_time
      Fiber.yield
    end
  end

  def line(x1, y1, x2, y2)
    LineClip.new(self, x1, y1, x2, y2)
  end
end

class ScriptClip < ClipObject
  def initialize(parent, &block)
    super(parent)
    set_script(&block)
  end
end

class LoopBlock < ClipObject
  def initialize(parent)
    super(parent)
    
    set_sciprt do
      loop do
        line 0, 0, 100, 100
        wait 0.5
        line 100, 100, 0, 200
        wait 0.5
        clear_clips  # 子クリップを全て削除(描画されなくなる)
        wait 0.5
      end
    end
  end
end

class ClipObject
  def loop_block(x, y)
    LoopBlock.new(self, x, y)
  end
end

def script(&block)
  $clip_manager.root.add_clip(BlockScript.new(&block))　# ここで呼ばれるadd_clipもグローバル関数(ClipManagerに直接クリップを追加する)
end

script do |c|
  c.line 0, 0, 100, 100
  c.wait 0.5
  c.line 100, 100, 0, 200
  c.wait 0.5
end
```

## 疑似コード
```ruby
class ClipObject
  def initialize
    $clip_manager.add_to_current_clip(self)
    @time = 0.0 # 生成されたときの時間は常に0
  end

  def update(delta_time)
    # 子クリップを更新
    @clips.each {|e| e.update(delta_time) }

    # 自身と子クリップどちらを先に再生する？
    # 生成したフレームではまだ子クリップを動かしたくない気がするので子クリップ→自身の順で
    @time += delta_time　　# ここで delta_time * @rate にすれば再生レートが更新できる

    $clip_manager.set_current_clip(self)  # resume中に生成されたクリップはここで設定したクリップに設定される
      @fiber.resume
    end
  end

  def draw_with_child
    # 描画順は親→子の順の方がよさそう？
    draw   # 継承先でオーバーライドしてよい
    @clip.each {|e| e.draw_with_child }
  end

  def add_script(&block)
    @block = block  # 再起動用にblockを保持
    @fiber = Fiber.new { @block.call }
  end

  def reset()
    @clips = []  # 子クリップがあれば空に
    @fiber = Fiber.new { @block.call } if @block  # ファイバー再生成
  end
end

class BlockScript < ClipObject
  def initialize(&block)
    super()
    add_script(&block)
  end
end

class LoopBlock < ClipObject
  def initialize()
    super()
    
    add_sciprt do
      loop do
        line 0, 0, 100, 100
        wait 0.5
        line 100, 100, 0, 200
        wait 0.5
        clear_clips  # 子クリップを全て削除(描画されなくなる)
        wait 0.5
      end
    end
  end
end

def script(&block)
  add_clip(BlockScript.new(&block))　# ここで呼ばれるadd_clipもグローバル関数(ClipManagerに直接クリップを追加する)
end

script do
  line 0, 0, 100, 100
  wait 0.5
  line 100, 100, 0, 200
  wait 0.5
end
```

## waitやtarget_timeはClipObjectにもグローバル空間にも定義する
wait ... グローバル時刻(ClipManager#time)まで待つ
ClipObject#wait ... 自身の@timeまで待つ(生成されてからの経過時間)

ClipObject#update(delta_time)で常に渡す
scriptで作られるのはトップレベルのクリップに過ぎない

## 基本設計
- ClipManager
  - プログラム全体で1つ
  - 現在実行中のClipScript
  - タイムラインUI
  - 経過時間の管理
- BlockScript < ClipObject
  - script do ～ end につき1つ生成される
  - scriptメソッドを持つClipObjectも1つ持つ
  - 複数のClipObjectを持つことができる
  - update(delta_time) 経過時間をClipObjectに通知
  - reset()
    - ClipObjectを保持する配列は空に(cls)
    - Fiberを作り直し
    - 現在時間を0に戻す
  - draw() 全てのClipObjectに対してdrawを呼び出し
- ClipObject
  - 描画の最小単位
  - (必須) 座標、色といった各種パラメータ
  - (必須) draw
  - (任意) script
    - scriptを持つ場合はClipScriptを1つ生成してFiberとして渡す
  - update(delta_time)
    - scriptを持つ場合は経過時間を通知
  - detach ClipScriptから自身を削除
  - 
- LineClip < ClipObject
  - 線を描画するクリップ

## 親子関係
ClipObjectが子を再帰的に持つことで複雑な構造を作ることが可能。

```
ClipManager 
  BlockScript
    ClipObject
    ClipObject
      ClipObject
      ClipObject
      ClipObject
        ClipObject
    ClipObject
  BlockScript
    ClipObject
    ClipObject
```

## 更新
### 再生
- タイムラインUIから目標時間が決定
- @target_time - @time が delta_time 
  - delta_timeががマイナスの場合は逆再生に移行
- 持っている全てのClipScriptに対してupdate(delta_time)を呼び出し

### 逆再生
- ClipManager.scripts全てにClipScript#resetを呼び出し
- 現在時刻を0に
- delta_time = @target_time
- 持っている全てのClipScriptに対してupdate(delta_time)を呼び出し
- update中はdrawメソッドはいっさい呼ばれないのが肝

## 描画
目標時間に移行する更新処理が終わった後に、ClipMangerが持つ全てのClipScriptに対してdrawを呼び出し

## script内の時間調整API
- wait .. 指定秒待つ
- target_time .. 現在スクリプトの目標時間まで待つ

## 考察
- ClipScriptとClipObjectを別オブジェクトとして分ける意味は何？ →　分けなくてよさそう
  - ClipObjectがscript機能を持つ、でもいいのだろうか
- ClipScriptやClipObjectの再利用
  - 逆再生するときに毎回生成すると遅いのではないか
  - タイムライン全体の最大量はどこかに落ち着くはず
  - ClipScript#resetしたときにフリーリストの保持しておいて要求があるたびに再利用するとか
  - LineClip.newの代わりにClipObject.get(LineClip)みたいにしないと駄目かも
  - ClipObject#to_freelistみたいなメソッドを定義している人は再利用可能にする
    - それ以外はClipObject.get()を読んでも常に新しいインスタンスを返す

## こんなデモが作れそう
- sinカーブをプロットしながら古い点がアニメーションしながら消える
- ソート(数字が入った箱のクリップを作成する、2つの箱ブロックの位置を入れ替えるAPIを用意)
- gifアニメにキャプションを入れる