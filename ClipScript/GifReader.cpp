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
int32 GifReader::index(float timeSec) const
{
	return AnimatedGIFReader::MillisecToIndex(timeSec * 1000, mDelays, mDuration);
}

//----------------------------------------------------------
int32 GifReader::width() const
{
	if (mImages.isEmpty()) {
		return 0;
	}

	return mImages[0].width();
}

//----------------------------------------------------------
int32 GifReader::height() const
{
	if (mImages.isEmpty()) {
		return 0;
	}

	return mImages[0].height();
}

}
