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
	//ÉèÖÃ±ß½çÑÕÉ«
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//»­¿ÕÐÄÔ²
	circle(centerX, centerY, radius);
	//ÉèÖÃÌî³äÑÕÉ«
	setfillcolor(EGERGB(fillColor->getRed(), fillColor->getGreen(), fillColor->getBlue()));
	//Ìî³ä·¶Î§
	floodfill(centerX, centerY, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));

	getch();
}