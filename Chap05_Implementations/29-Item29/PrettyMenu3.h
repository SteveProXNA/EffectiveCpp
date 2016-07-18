#pragma once

#include <memory>
#include <sstream>
#include "Lock.h"

class Image
{
public:
	Image(std::istream& i) : img(i) {}

private:
	std::istream& img;
};

class PrettyMenu
{
public:
	void changeBackground(std::istream& imgSrc);

private:
	Mutex mutex;
	std::tr1::shared_ptr<Image> bgImage;
	int imageChanges;
};

void PrettyMenu::changeBackground(std::istream& imgSrc)
{
	Lock m1(&mutex);
	// replace bgImage internal pointer with result of "new Image" expression.
	bgImage.reset(new Image(imgSrc));
	++imageChanges;
}