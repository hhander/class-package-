#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>
#include<math.h>
using namespace std;
#include"point.h"

class Circle
{
private:
	int m_r;
	Point CenterPoint;
public:
	void setR(int r);
	void IsInCircle(Point point);
	void setCenter(Point point);
};