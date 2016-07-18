#pragma once

class SpeedDataCollection
{
public:
	void addValue(int speed);
	double averageSpeedSoFar() const;
};