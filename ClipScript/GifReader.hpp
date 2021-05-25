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
	Array<Image> images() const { return mImages; }

	int32 index(float timeSec) const;
	int32 width() const;
	int32 height() const;

private:
	AnimatedGIFReader mReader;
	int32 mDuration;
	Array<int32> mDelays;
	Array<Image> mImages;
};
}
