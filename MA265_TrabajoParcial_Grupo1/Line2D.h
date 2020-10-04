#pragma once

#ifndef __LINE2D_H__
#define __LINE2D_H__

#include "Point2D.h"

class Line2D
{
private:
	Point2D point1;
	Point2D point2;
public:
	Line2D(Point2D point1, Point2D point2) : point1(point1), point2(point2){ }
	~Line2D() { }

	int getRandomPointX(int y);
	int getRandomPointY(int x);
	
	void setPoint1(Point2D point);
	void setPoint2(Point2D point);
	Point2D getPoint1();
	Point2D getPoint2();
};

#endif