#include "GifReader.hpp"

//----------------------------------------------------------
namespace siv3druby {
//----------------------------------------------------------
GifReader::GifReader(FilePathView path)
: mReader(path)
, mDuration(0)
, mDelays()
, mImages()
{
	mReader.read(mImages, mDelays, mDuration);
}

//----------------------------------------------------------
int32 GifReader::index(float timeSec)
{
	return AnimatedGIFReader::MillisecToIndex(timeSec * 1000, mDelays, mDuration);
}

}
