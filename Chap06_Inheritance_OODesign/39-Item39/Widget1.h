#include "Timer.h"

class Widget : private Timer
{
private:
	// Look at Widget data etc.
	virtual void onTick() const;
};