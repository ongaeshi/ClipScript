#pragma once

#include <Siv3D.hpp>

//----------------------------------------------------------
namespace siv3druby {
class GifReader
{
public:
	GifReader(FilePathView path);

	int32 duration() const { return mDuration; }

private:
	AnimatedGIFReader mReader;
	int32 mDuration;
};
}
