#pragma once

#include <Siv3D.hpp>

//----------------------------------------------------------
namespace siv3druby {
class GifReader
{
public:
	GifReader(FilePathView path);

private:
	AnimatedGIFReader mReader;
};
}
