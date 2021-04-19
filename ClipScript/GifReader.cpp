#include "GifReader.hpp"

//----------------------------------------------------------
namespace siv3druby {
//----------------------------------------------------------
GifReader::GifReader(FilePathView path)
: mReader(path)
, mDuration(0)
{
	Array<Image> images;
	Array<int32> delays;

	mReader.read(images, delays, mDuration);
}

}
