#include "Timer.h"

class Widget
{
private:
	class WidgetTimer : public Timer
	{
	public:
		virtual void onTick() const;
	};

	WidgetTimer timer;
};