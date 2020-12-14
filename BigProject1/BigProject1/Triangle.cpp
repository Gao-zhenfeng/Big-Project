#include "Triangle.h"
#include "graphics.h"
Triangle::Triangle() : p1{ 0, 0 }, p2{ 0, 0 }, p3{ 0,0 }
{
}

Triangle::Triangle(Point p1, Point p2, Point p3, Color boderColor,
	Color fillColor)
	: p1{ p1 }, p2{ p2 }, p3{ p3 }, Shape(boderColor, fillColor)
{
}

Triangle::Triangle(Point p1, Point p2, Point p3, Color boderColor)
	: p1{ p1 }, p2{ p2 }, p3{ p3 }, Shape(boderColor)
{
}

Triangle::~Triangle()
{
}

void Triangle::setPoint(Point p, int num)
{
	switch (num)
	{
	case 1:
		this->p1 = p;
		break;
	case 2:
		this->p2 = p;
		break;
	case 3:
		this->p3 = p;
		break;
	default:
		break;
	}
}

void Triangle::draw()
{
	//设置边界颜色
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//画三角形
	line(p1.getX(), p1.getY(), p2.getX(), p2.getY());
	line(p2.getX(), p2.getY(), p3.getX(), p3.getY());
	line(p3.getX(), p3.getY(), p1.getX(), p1.getY());

	if (getFilled() == true)
	{//设置填充颜色
		setfillcolor(EGERGB(getFilledRed(), getFilledGreen(), gerFilledBlue()));
		//填充范围
		int innerPointX, innerPointY;
		innerPointX = (2 * p1.getX() + p2.getX() + p3.getX()) / 4;
		innerPointY = (2 * p1.getY() + p2.getY() + p3.getY()) / 4;
		floodfill(innerPointX, innerPointY, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	}

	getch();
}