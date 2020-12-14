#pragma once
#include "Point.h"
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle();
	Triangle(Point p1, Point p2, Point p3, Color boderColor, Color fillColor);
	Triangle(Point p1, Point p2, Point p3, Color boderColor);

	~Triangle();

	void setPoint(Point p, int num);//num is i, 修改Pointi, i<=3
	void draw() override;

private:
	Point p1;
	Point p2;
	Point p3;
};
