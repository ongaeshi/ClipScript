#pragma once

//----------------------------------------------------------
namespace siv3druby {
class Siv3DRubyState {
public:
    Siv3DRubyState()
    : argv()
    , filePath()
    , evalString()
    , isCapture(false)
    , isWatch(false)
    , isReload(false)
    {
    }

    Array<String> argv;
    FilePath filePath;
    String evalString;
    bool isCapture;
    bool isWatch;
    bool isReload;
    Optional<DateTime> lastWriteTime;
    float restartTime;
    bool restartIsStop;
};

extern Siv3DRubyState fSiv3DRubyState;

}

void Main();
