#include "Rectangle.h"
#include "graphics.h"
Rectangle::Rectangle()
	:Rectangle(0, 0, 0, 0, Color{ 0, 0, 0 }, Color{ 0, 255, 255 }) {}

Rectangle::Rectangle(int top, int bottom, int left, int right,
	Color boderColor, Color fillColor, int Width, int Height)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Controller{ Width, Height,boderColor }
{
	this->fillColor = new Color{ fillColor };
}

Rectangle::Rectangle(int top, int bottom, int left, int right,
	Color boderColor, Color fillColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Controller{ boderColor }
{
	this->fillColor = new Color{ fillColor };
}

Rectangle::~Rectangle()
{
	delete fillColor;
	fillColor = nullptr;
}

void Rectangle::setCoordinate(int top, int bottom, int left, int right)
{
	this->top = top;
	this->bottom = bottom;
	this->left = left;
	this->right = right;
}

int Rectangle::getTop()
{
	return top;
}

int Rectangle::getBottom()
{
	return bottom;
}

int Rectangle::getLeft()
{
	return left;
}

int Rectangle::getRight()
{
	return right;
}

void Rectangle::draw()
{
	//ÉèÖÃ±ß½çÑÕÉ«
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//»­¿ÕÐÄÔ²
	rectangle(left, top, right, bottom);
	//ÉèÖÃÌî³äÑÕÉ«
	setfillcolor(EGERGB(fillColor->getRed(), fillColor->getGreen(), fillColor->getBlue()));
	//Ìî³ä·¶Î§
	floodfill((left + right) / 2, (top + bottom) / 2, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));

	getch();
}