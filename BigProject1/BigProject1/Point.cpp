#include "Point.h"
#include <string>
Point::Point(int _x, int _y) : x{ _x }, y{ _y }
{
}
int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

std::string Point::getXY()
{
	return ("(x,y) : (" + std::to_string(x) + std::to_string(y) + ")");
}