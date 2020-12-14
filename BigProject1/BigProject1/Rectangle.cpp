#include "Rectangle.h"
#include "graphics.h"

Rectangle::Rectangle(int top, int bottom, int left, int right,
	Color boderColor, Color fillColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Shape(boderColor, fillColor)
{
}

Rectangle::Rectangle(int top, int bottom, int left, int right, Color boderColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Shape(boderColor)
{
}

Rectangle::~Rectangle()
{
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