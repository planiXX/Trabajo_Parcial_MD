#include "Entity2D.h"

void Entity2D::addPoint(Point2D point)
{
    vertices.push_back(point);
}

int Entity2D::getPointCount()
{
    return vertices.size();
}

void Entity2D::removePoint(int position)
{
    vertices.erase(vertices.begin() + position);
}

void Entity2D::editPoint(int position, Point2D newValues)
{
    vertices[position] = newValues;
}

vector<Point2D> Entity2D::getPoints()
{
    return vertices;
}

Point2D Entity2D::getPoint(int position)
{
    return vertices[position];
}
