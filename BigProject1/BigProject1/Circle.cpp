#include "Circle.h"
#include "graphics.h"
#include <iostream>
Circle::Circle(int x, int y, int r, Color boderColor, Color fillColor, int Width, int Height)
	: centerX{ x }, centerY{ y }, radius{ r }, boderColor{ boderColor }, fillColor{ fillColor },
	Controller(Width, Height)
{
	filled = true;
}

Circle::Circle(int x, int y, int r, Color boderColor)
	: centerX{ x }, centerY{ y }, radius{ r }, boderColor{ boderColor }, Controller(640, 480)
{
	filled = false;
	fillColor = Color{ 255, 255, 255 };
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

void Circle::getFilledColor()
{
	fillColor.getColor();
}

void Circle::getBoderColor()
{
	boderColor.getColor();
}

int Circle::getBoderRed()
{
	return boderColor.getRed();
}

int Circle::getBoderGreen()
{
	return boderColor.getGreen();
}

int Circle::gerBoderBlue()
{
	return boderColor.getBlue();
}

int Circle::getFilledRed()
{
	return fillColor.getRed();
}

int Circle::getFilledGreen()
{
	return fillColor.getGreen();
}

int Circle::gerFilledBlue()
{
	return fillColor.getBlue();
}

void Circle::setBoderColor(int r, int g, int b)
{
	boderColor.setColor(r, g, b);
}

void Circle::draw()
{
	//设置边界颜色
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//画空心圆
	circle(centerX, centerY, radius);

	if (filled == true)
	{//设置填充颜色
		setfillcolor(EGERGB(getFilledRed(), getFilledGreen(), gerFilledBlue()));
		//填充范围
		floodfill(centerX, centerY, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	}

	getch();
	//cleardevice();
}