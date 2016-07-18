#pragma once

class Window
{
public:
	virtual void onResize() {}
	virtual ~Window() {}
};

class SpecialWindow : public Window
{
public:
	virtual void onResize()
	{
		// this doesn't work!
		static_cast<Window>(*this).onResize();
	}
};