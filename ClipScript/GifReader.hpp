#pragma once

#include <Siv3D.hpp>

//----------------------------------------------------------
namespace siv3druby {
class GifReader
{
public:
	GifReader(FilePathView path);

	int32 duration() const { return mDuration; }
	Array<int32> delays() const { return mDelays; }

private:
	AnimatedGIFReader mReader;
	int32 mDuration;
	Array<int32> mDelays;
};
}
