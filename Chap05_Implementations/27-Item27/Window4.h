#pragma once

class Window
{
public:
	virtual void blink() {}
};

class SpecialWindow : public Window
{
public:
	virtual void blink()
	{
		int x = 7;
	}
};