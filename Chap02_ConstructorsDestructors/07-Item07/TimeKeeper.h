class TimeKeeper
{
public:
	TimeKeeper() {}
	~TimeKeeper() {}
};


class AtomicClock: public TimeKeeper {};
class WaterClock: public TimeKeeper {};
class WristWatch: public TimeKeeper {};