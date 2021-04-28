#include "GifReader.hpp"

//----------------------------------------------------------
namespace siv3druby {
//----------------------------------------------------------
GifReader::GifReader(FilePathView path)
: mReader(path)
, mDuration(0)
, mDelays()
{
	Array<Image> images;

	mReader.read(images, mDelays, mDuration);
}

}
