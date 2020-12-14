#include "Circle.h"
#include "graphics.h"

Circle::Circle(int x, int y, int r, Color boderColor, Color fillColor)
	: centerX{ x }, centerY{ y }, radius{ r }, Shape(boderColor, fillColor)
{
}

Circle::Circle(int x, int y, int r, Color boderColor)
	: centerX{ x }, centerY{ y }, radius{ r }, Shape(boderColor) 		//血泪教训，在子类显示调用基类构造函数， 是一种良好的编程习惯
{
}

Circle::~Circle()
{
}

void Circle::setCenterX(int x)
{
	centerX = x;
}
void Circle::setCenterY(int y)
{
	centerY = y;
}
int Circle::getCenterX()
{
	return centerX;
}
int Circle::getCenterY()
{
	return centerY;
}

void Circle::setRadius(int r)
{
	this->radius = r;
}

int Circle::getRadius()
{
	return radius;
}

void Circle::draw()
{
	//设置边界颜色
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//画空心圆
	circle(centerX, centerY, radius);

	if (getFilled() == true)
	{//设置填充颜色
		setfillcolor(EGERGB(getFilledRed(), getFilledGreen(), gerFilledBlue()));
		//填充范围
		floodfill(centerX, centerY, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	}

	getch();
	//cleardevice();
}