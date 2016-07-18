#pragma once

#include <iostream>
#include <string>

class Window
{
public:
	std::string name() const { return "WINDOW"; }
	virtual void display() const
	{
		std::cout << "Display: window" << std::endl;
	}
};