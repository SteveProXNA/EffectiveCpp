#pragma once

#include <sstream>

class Mutex
{
};

void lock(const Mutex& mutex)
{
}
void unlock(const Mutex& mutex)
{
}

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
	Image* bgImage;
	int imageChanges;
};

void PrettyMenu::changeBackground(std::istream& imgSrc)
{
	lock(mutex);
	delete bgImage;
	++imageChanges;
	bgImage = new Image(imgSrc);
	unlock(mutex);
}