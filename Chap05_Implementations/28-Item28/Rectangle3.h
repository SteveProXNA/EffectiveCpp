#pragma once

#include <memory>

class GuiObject
{
};

// class for representing points
class Point
{
public:
	Point() {}
	Point(int xx, int yy) : x(xx), y(yy) {}
	void setX(int newX) { x = newX; }
	void setY(int newY) { y = newY; }

private:
	int x, y;
};

// Point data for a Rectangle
struct RectData
{
	//RectData() {}
	RectData(Point p1, Point p2)
	{
		ulhc = p1;
		lrhc = p2;
	}
	Point ulhc;	// upper left hand corner
	Point lrhc;	// lower rght hand corner
};

class Rectangle
{
public:
	Rectangle() {}
	Rectangle(Point p1, Point p2) : pData(create(p1, p2))
	{
	}

	const Point& upperLeft() const { return pData->ulhc; }
	const Point& lowerRight() const { return pData->lrhc; }

private:
	std::tr1::shared_ptr<RectData> pData;
	RectData* create(Point p1, Point p2)
	{
		return new RectData(p1, p2);
	}
};