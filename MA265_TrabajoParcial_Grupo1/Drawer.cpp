#include "Drawer.h"

void Drawer::prepareCanvas()
{
	graphics = canvasForm->CreateGraphics();
	canvasContext = BufferedGraphicsManager::Current;
	buffer = canvasContext->Allocate(graphics, canvasForm->ClientRectangle);
	drawer = buffer->Graphics;
	clearCanvas();

	xAxisLength = (buffer->Graphics->VisibleClipBounds.Right - 30) - (buffer->Graphics->VisibleClipBounds.Left + 350);
	yAxisLength = buffer->Graphics->VisibleClipBounds.Bottom - 60;
}

void Drawer::prepareCanvasPictureBox()
{
	graphics = canvasPictureBox->CreateGraphics();
	canvasContext = BufferedGraphicsManager::Current;
	buffer = canvasContext->Allocate(graphics, canvasPictureBox->ClientRectangle);
	drawer = buffer->Graphics;
	clearCanvas();

	xAxisLength = (buffer->Graphics->VisibleClipBounds.Right - 30) - (buffer->Graphics->VisibleClipBounds.Left + 350);
	yAxisLength = buffer->Graphics->VisibleClipBounds.Bottom - 60;
}

void Drawer::clearCanvas()
{
	drawer->Clear(Color::White);
}

void Drawer::clearCanvas(Color backColor)
{
	drawer->Clear(backColor);
}

void Drawer::drawGrid(Color axisColor)
{
	Point2D point1;
	Point2D point2;

	point1.x = (int)buffer->Graphics->VisibleClipBounds.Left + 350;
	point1.y = 30;

	point2.x = (int)buffer->Graphics->VisibleClipBounds.Left + 350;
	point2.y = (int)buffer->Graphics->VisibleClipBounds.Bottom - 30;

	Line2D yAxis = Line2D(point1, point2);

	point1.x = (int)buffer->Graphics->VisibleClipBounds.Left + 350;
	point1.y = (int)buffer->Graphics->VisibleClipBounds.Bottom - 30;

	point2.x = (int)buffer->Graphics->VisibleClipBounds.Right - 30;
	point2.y = (int)buffer->Graphics->VisibleClipBounds.Bottom - 30;

	Line2D xAxis = Line2D(point1, point2);

	drawLine(yAxis);
	drawLine(xAxis);

	int space = (int)xAxisLength / 25;

	Point2D randomPoint;
	randomPoint.x = (int)buffer->Graphics->VisibleClipBounds.Left + 350;
	randomPoint.y = (int)buffer->Graphics->VisibleClipBounds.Bottom - 30;
	drawPoint(randomPoint);
	drawer->DrawString("0", gcnew Font(FontFamily::GenericSansSerif, 12), gcnew SolidBrush(Color::Red), randomPoint.x, randomPoint.y);
	for (int i = 1; i <= 25; ++i)
	{
		randomPoint.x += space;
		drawPoint(randomPoint);
		drawer->DrawString(i.ToString(), gcnew Font(FontFamily::GenericSansSerif, 12), gcnew SolidBrush(Color::Red), randomPoint.x - 2, randomPoint.y + 2);
	}

	randomPoint.x = (int)buffer->Graphics->VisibleClipBounds.Left + 350;
	randomPoint.y = (int)buffer->Graphics->VisibleClipBounds.Bottom - 30;
	drawPoint(randomPoint);
	for (int i = 1; i <= 25; ++i)
	{
		if (randomPoint.y - space < 30)
			break;

		randomPoint.y -= space;
		drawPoint(randomPoint);
		drawer->DrawString(i.ToString(), gcnew Font(FontFamily::GenericSansSerif, 12), gcnew SolidBrush(Color::Red), randomPoint.x - 25, randomPoint.y);
	}

	buffer->Render(graphics);
}

void Drawer::drawEntity(Entity2D entity)
{
	for (Point2D point : entity.getPoints())
	{
		drawPoint(point);
	}
}

void Drawer::drawPoint(Point2D point)
{
	drawer->FillRectangle(gcnew SolidBrush(Color::Red), point.x, point.y, 4, 4);
	/*buffer->Render(graphics);*/
}

void Drawer::drawLine(Point2D point1, Point2D point2)
{
	drawer->DrawLine(gcnew Pen(Color::Blue, 1), point1.x, point1.y, point2.x, point2.y);
	/*buffer->Render(graphics);*/
}

void Drawer::drawLine(Line2D line)
{
	drawer->DrawLine(gcnew Pen(Color::Blue, 1), line.getPoint1().x, line.getPoint1().y, line.getPoint2().x, line.getPoint2().y);
	/*buffer->Render(graphics);*/
}
