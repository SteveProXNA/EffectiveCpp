class Timer
{
public:
	explicit Timer(int tickFrequency);

	// Automatically called for each tick.
	virtual void onTick() const;
};