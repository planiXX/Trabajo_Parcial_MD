#include "Line2D.h"

int Line2D::getRandomPointX(int y)
{
	return ((point2.x - point1.x) * (y - point1.y) / (point2.y - point1.y)) + point1.x;
}

int Line2D::getRandomPointY(int x)
{
	return ((point2.y - point1.y) * (x - point1.x) / (point2.x - point1.x)) + point1.y;
}

void Line2D::setPoint1(Point2D point)
{
	this->point1 = point;
}

void Line2D::setPoint2(Point2D point)
{
	this->point2 = point;
}

Point2D Line2D::getPoint1()
{
	return this->point1;
}

Point2D Line2D::getPoint2()
{
	return this->point2;
}
