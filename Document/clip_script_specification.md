# ClipScript仕様
## 基本設計
- ClipManager
  - プログラム全体で1つ
  - 現在実行中のClipScript
  - タイムラインUI
  - 経過時間の管理
- ClipScript
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
ClipScriptとClipObjectを組み合わせることで複雑な構造を作ることが可能。

```
ClipManager 
  ClipScript
    ClipObject
    ClipObject
      ClipScript
        ClipObject
        ClipObject
        ClipObject
          ClipScript
            ClipObject
        ClipObject
    ClipObject
  ClipScript
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
- ClipScriptとClipObjectを別オブジェクトとして分ける意味は何？
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