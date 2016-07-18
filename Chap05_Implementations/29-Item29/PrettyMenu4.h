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

// Pretty Menu impl.
struct PMImpl
{
	std::tr1::shared_ptr<Image> bgImage;
	int imageChanges;
};

class PrettyMenu
{
public:
	void changeBackground(std::istream& imgSrc);

private:
	Mutex mutex;
	std::tr1::shared_ptr<PMImpl> pImpl;
};

void PrettyMenu::changeBackground(std::istream& imgSrc)
{
	using std::swap;
	Lock m1(&mutex);
	std::tr1::shared_ptr<PMImpl> pNew(new PMImpl(*pImpl));
	pNew->bgImage.reset(new Image(imgSrc));
	++pNew->imageChanges;
	swap(pImpl, pNew);
}