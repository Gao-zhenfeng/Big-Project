#include "Rectangle.h"
#include "graphics.h"

RECTANGLE::RECTANGLE()
	: RECTANGLE(0, 0, 0, 0, Color{ 0, 0, 0 }, Color{ 0, 0, 0 })
{
}

RECTANGLE::RECTANGLE(int top, int bottom, int left, int right,
	Color boderColor, Color fillColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Shape(boderColor, fillColor)
{
}

RECTANGLE::RECTANGLE(int top, int bottom, int left, int right, Color boderColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Shape(boderColor)
{
}

RECTANGLE::~RECTANGLE()
{
}

void RECTANGLE::setCoordinate(int top, int bottom, int left, int right)
{
	this->top = top;
	this->bottom = bottom;
	this->left = left;
	this->right = right;
}

int RECTANGLE::getTop()
{
	return top;
}

int RECTANGLE::getBottom()
{
	return bottom;
}

int RECTANGLE::getLeft()
{
	return left;
}

int RECTANGLE::getRight()
{
	return right;
}

void RECTANGLE::draw()
{
	//设置边界颜色
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//画空心圆
	rectangle(left, top, right, bottom);
	if (getFilled() == true)
	{
		//设置填充颜色
		setfillcolor(EGERGB(getFilledRed(), getFilledGreen(), gerFilledBlue()));
		//填充范围
		floodfill((left + right) / 2, (top + bottom) / 2, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	}
	getch();
	//cleardevice();
}