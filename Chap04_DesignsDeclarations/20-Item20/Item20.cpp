#pragma once

#include <iostream>
#include "Window.h"
#include "WindowWithScrollBars.h"

//void printNameAndDisplay(Window w)
//{
//	std::cout << w.name() << std::endl;
//	w.display();
//}

void printNameAndDisplay(const Window& w)
{
	std::cout << w.name() << std::endl;
	w.display();
}


// stevepro test
int main()
{
	Window w;
	printNameAndDisplay(w);

	WindowWithScrollBars wwsb;
	printNameAndDisplay(wwsb);
	return 0;
}