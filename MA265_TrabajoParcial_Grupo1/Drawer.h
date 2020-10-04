#pragma once

#ifndef __DRAWER_H__
#define __DRAWER_H__

#include "Entity2D.h"
#include "Line2D.h"

#include <vector>

using namespace std;
using namespace System::Drawing;

ref class Drawer
{
private:
	//BufferedGraphics^ canvasBuffer;
	System::Windows::Forms::Form^ canvasForm;
	System::Windows::Forms::PictureBox^ canvasPictureBox;
	BufferedGraphicsContext^ canvasContext;
	Graphics^ graphics;
	BufferedGraphics^ buffer;
	Graphics^ drawer;

	float xAxisLength;
	float yAxisLength;

	void prepareCanvas();
	void prepareCanvasPictureBox();
public:
	//Drawer(BufferedGraphics^ buffer) : canvasBuffer(buffer) { }
	Drawer(System::Windows::Forms::Form^ form) : canvasForm(form) { prepareCanvas(); }
	Drawer(System::Windows::Forms::PictureBox^ pictureBox) : canvasPictureBox(pictureBox) { prepareCanvasPictureBox(); }
	~Drawer() { }

	void clearCanvas();
	void clearCanvas(Color backColor);
	void drawGrid(Color axisColor);
	void drawEntity(Entity2D entity);
	void drawPoint(Point2D point);
	void drawLine(Point2D point1, Point2D point2);
	void drawLine(Line2D line);
};

#endif