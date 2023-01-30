#include<iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(const int &x1, const int &y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2)
{

}

void Rectangle::showRecInfo() const
{
	cout << "�� ���" << upLeft.getx() << "," << upLeft.gety() << endl;
	cout << "�� �ϴ�" << lowRight.getx() << "," << lowRight.gety() << endl;

}