#pragma once

struct Day
{
explicit Day(int d) : val(d) {}
int val;
};

struct Month
{
explicit Month(int m) : val(m) {}
int val;
};

struct Year
{
explicit Year(int y) : val(y) {}
int val;
};


class Date
{
 public:
	Date(const Month& m, const Day& d, const Year& y) :
	   month(m.val), day(d.val), year(y.val)
	{
	}

private:
	int month, day, year;
};