#pragma once
#ifndef __FIGURE2D_H__
#define __FIGURE2D_H__

#include <vector>
#include "Entity2D.h"
#include "Drawer.h"
#include "Line2D.h"

using namespace std;

class Figure2D : public Entity2D
{
public:
	Figure2D(vector<Point2D> vertices) : Entity2D(vertices) { }
	Figure2D() { }
	~Figure2D() { }

	void rotate(float angle);
	void resize(float factor, Point2D center);
	void reflect(Line2D referenceLine);

	Figure2D getRotatedFigure(float angle);
	Figure2D getResizedFigure(float factor, Point2D center);
	Figure2D getReflectedFigure(Line2D referenceLine);

	void draw(Drawer drawer);
	void drawRotationAnimation(Drawer drawer, float angle);
	void drawResizingAnimation(Drawer drawer, float factor, Point2D center);
	void drawReflectionAnimation(Drawer drawer, Line2D referenceLine);
};

#endif