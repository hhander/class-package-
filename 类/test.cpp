#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>
#include<graphics.h>

//typedef struct Circle
//{
//	int r;
//	double pi = 3.14;
//	double CalculatePerim()
//	{
//		return 2.0 * r * pi;
//	}
//}Circle;
//
//
////class Circle
////{
////public:
////	int r;
////	double pi = 3.14;
////	double calculatePeri()
////	{
////		return 2 * r * pi;
////	}
////}c1,c2;
//
//int main()
//{
//	/*c1.r = 3;
//	cout << c1.calculatePeri() << endl;*/
//	Circle c1;
//	c1.r = 5;
//	printf("%lf", c1.CalculatePerim());
//
//	return 0;
//}

//class Student
//{
//public:
//	string name;
//	int id;
//	void AddInfo()
//	{
//		scanf("%s%d", &name,&id);
//	}
//	void ShowInfo()
//	{
//		printf("%s%s", name, id);
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.AddInfo();
//	s1.ShowInfo();
//
//
//
//	return 0;
//}


//class Student
//{
//public:
//	string name;
//	int StuId;
//
//
//	void ShowInfo()
//	{
//		cout << name << endl << StuId;
//	}
//
//	void SetInfo()
//	{
//		cin >> name;
//		cin >> StuId;
//	}
////};
//
//
//int main()
//{
//	Student s1;
//	//s1.name = "abc";
//	s1.StuId = 1;
//	s1.SetInfo();
//	s1.ShowInfo();
//	
//	return 0;
//}
//
////int main()
////{
////	string name;
////	/*cin >> name;*/
////	scanf("%s", &name);
////	cout << name;
////
////}


//class Cube
//{
//private:
//	double m_L, m_W, m_H;
//public:
//	double CalculateArea(double m_L, double m_H, double m_W)
//	{
//		return (m_L * m_W + m_L * m_H + m_W * m_H)*2;
//	}
//
//	double CalculateVolume(double m_L, double m_H, double m_W)
//	{
//		return m_L * m_W * m_H;
//	}
//
//};
//
//
//int main()
//{
//	Cube c1;
//	//c1.m_H = 1.3;
//	//c1.m_L = 1.3;
//	//c1.m_W = 1.3;
//	cout << c1.CalculateArea(1.3,1.3,1.3)<<endl<<c1.CalculateVolume(1.3, 1.3, 1.3);
//
//
//	return 0;
//}



//class Cube
//{
//private:
//	int L;
//	int W;
//	int H;
//public:
//	void getL(int l)
//	{
//		L = l;
//	}
//	int putL()
//	{
//		return L;
//	}
//	void getW(int w)
//	{
//		W = w;
//	}
//	int putW()
//	{
//		return W;
//	}
//	void getH(int h)
//	{
//		H = h;
//	}
//	int putH()
//	{
//		return H;
//	}
//
//	int CalculateArea()
//	{
//		return 2 * (H * W + H * L + L * W);
//	}
//
//	int CalculateVolume()
//	{
//		return H * W * L;
//	}
//
//	bool Cmp(Cube &c)
//	{
//		if (c.putH() == H && c.putL() == L && c.putW() == W)
//		{
//			return true;
//		}
//		return false;
//	}
//
//};
//
////bool Cmp(Cube c1, Cube c2)
////{
////	if (c1.putH() == c2.putH() && c1.putL() == c2.putL() && c1.putW() == c2.putW())
////	{
////		return true;
////	}
////	return false;
////}
//
//
//int main()
//{
//	Cube c1;
//	c1.getH(10);
//	c1.getL(10);
//	c1.getW(10);
//	/*cout << c1.CalculateArea() << endl << c1.CalculateVolume();*/
//	Cube c2;
//	c2.getH(10);
//	c2.getL(10);
//	c2.getW(11);
//
//	bool ret = c1.Cmp(c2);
//	if (ret == true)
//	{
//		cout << "same";
//	}
//	else
//	{
//		cout << "not same";
//	}
//	
//
//
//
//
//	return 0;
//}
//#include<math.h>
////class Point
////{
////public:
////	void setX(int x)
////	{
////		X = x;
////	}
////	int getX()
////	{
////		return X;
////	}
////	void setY(int y)
////	{
////		Y = y;
////	}
////	int getY()
////	{
////		return Y;
////	}
////private:
////	int X;
////	int Y;
////};
////
////
////
////class Circle
////{
////private:
////	int m_r;
////	Point CirPoint;
////public:
////	void setR(int r)
////	{
////		m_r = r;
////	}
////	int getR()
////	{
////		return m_r;
////	}
////	void SetCirPoint(Point point)
////	{
////		CirPoint = point
////		;
////
////	}
////
////int IsInCircle(Point & point2)
////{
////	if (pow((CirPoint.getX() - point2.getX()), 2) + pow(CirPoint.getY() - point2.getY(), 2) == pow(m_r, 2))
////	{
////		return 0;
////	}
////	else if (pow((CirPoint.getX() - point2.getX()), 2) + pow(CirPoint.getY() - point2.getY(), 2) > pow(m_r, 2))
////	{
////		return 1;
////	}
////	else
////	{
////		return -1;
////	}
////}
////	
////
////};
////
////int main()
////{
////Circle c1;
////Point point1;
////point1.setX(0);
////point1.setY(0);
////c1.SetCirPoint(point1);
////c1.IsInCircle(point1);
////c1.setR(3);
////
////Point point2;
////point2.setX(4);
////point2.setY(3);
////int ret = c1.IsInCircle(point2);
////if (ret == 0)
////{
////cout << "on";
////}
////else if (ret == 1)
////{
////cout << "out";
////}
////else
////{
////cout << "inside";
////}
////
////
////
////	return 0;
////}
#include"point.h"
#include"Circle.h"

int main()
{
	Circle c1;
	c1.setR(3);
	Point point1;
	point1.setX(0);
	point1.setY(0);
	c1.setCenter(point1);

	Point point2;
	point2.setX(0);
	point2.setY(2);

	c1.IsInCircle(point2);

	return 0;
}