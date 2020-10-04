#pragma once

#ifndef __ENTITY2D_H__
#define __ENTITY2D_H__

#include <vector>
#include "Point2D.h"

using namespace std;

class Entity2D
{
private:
	vector<Point2D> vertices;

public:
	Entity2D() { }
	Entity2D(vector<Point2D> vertices) : vertices(vertices) { }
	~Entity2D() { vertices.clear(); }

	void addPoint(Point2D point);
	int getPointCount();
	void removePoint(int position);
	void editPoint(int position, Point2D newValues);
	vector<Point2D> getPoints();
	Point2D getPoint(int position);
};

#endif