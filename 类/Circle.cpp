#define _CRT_SECURE_NO_WARNINGS 1
#include"Circle.h"


void Circle::setR(int r)
{
	m_r = r;
}

void Circle::IsInCircle(Point point)
{
	if (pow(CenterPoint.getX() - point.getX(), 2) + pow(CenterPoint.getY() - point.getY(), 2) == pow(m_r, 2))
	{
		printf("on");
	}
	else if (pow(CenterPoint.getX() - point.getX(), 2) + pow(CenterPoint.getY() - point.getY(), 2) > pow(m_r, 2))
	{
		cout << "out";
	}
	else
	{
		cout << "inside";
	}
}

void Circle::setCenter(Point point)
{
	CenterPoint = point;
}