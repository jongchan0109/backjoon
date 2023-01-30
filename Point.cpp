#include<iostream>
#include "Point.h"
using namespace std;

Point::Point(const int& xpos, const int& ypos)
{
	x = xpos;
	y = ypos;
}

int Point::getx()const
{
	return x;
}

int Point::gety()const
{
	return y;
}

bool Point::Setx(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::sety(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}

