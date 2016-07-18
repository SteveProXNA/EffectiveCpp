#pragma once

#include <iostream>
#include "Window.h"

class WindowWithScrollBars : public Window
{
public:
	void display() const
	{
		std::cout << "Display: window with scroll bars" << std::endl;
	}
};