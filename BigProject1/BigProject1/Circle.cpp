#include "Circle.h"
#include "graphics.h"

Circle::Circle(int x, int y, int r, Color boderColor, Color fillColor, int Width, int Height)
	: centerX{ x }, centerY{ y }, radius{ r }, Controller(Width, Height, boderColor)
{
	this->fillColor = new Color{ fillColor };
}

Circle::Circle(int x, int y, int r, Color boderColor, Color fillColor)
	: centerX{ x }, centerY{ y }, radius{ r }, Controller(boderColor)
{
	this->fillColor = new Color{ fillColor };
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

void Circle::draw()
{
	//���ñ߽���ɫ
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//������Բ
	circle(centerX, centerY, radius);
	//���������ɫ
	setfillcolor(EGERGB(fillColor->getRed(), fillColor->getGreen(), fillColor->getBlue()));
	//��䷶Χ
	floodfill(centerX, centerY, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));

	getch();
}