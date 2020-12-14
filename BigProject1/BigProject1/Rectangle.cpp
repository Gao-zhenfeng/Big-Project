#include "Rectangle.h"
#include "graphics.h"

Rectangle::Rectangle(int top, int bottom, int left, int right,
	Color boderColor, Color fillColor, int Width, int Height)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Controller{ Width, Height }
{
	this->fillColor = fillColor;
	this->boderColor = boderColor;
	filled = true;
}

Rectangle::Rectangle(int top, int bottom, int left, int right, Color boderColor)
	: top{ top }, bottom{ bottom }, left{ left }, right{ right },
	Controller{ 640, 480 }
{
	this->boderColor = boderColor;
	this->fillColor = Color{ 255, 255, 255 };
	filled = false;
}

Rectangle::~Rectangle()
{
}

bool Rectangle::getFilled()
{
	return filled;
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

int Rectangle::getBoderRed()
{
	return boderColor.getRed();
}

int Rectangle::getBoderGreen()
{
	return boderColor.getGreen();
}

int Rectangle::gerBoderBlue()
{
	return boderColor.getBlue();
}

void Rectangle::setBoderColor(int r, int g, int b)
{
	boderColor.setColor(r, g, b);
}

void Rectangle::draw()
{
	//设置边界颜色
	setcolor(EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	//画空心圆
	rectangle(left, top, right, bottom);
	if (filled == true)
	{
		//设置填充颜色
		setfillcolor(EGERGB(fillColor.getRed(), fillColor.getGreen(), fillColor.getBlue()));
		//填充范围
		floodfill((left + right) / 2, (top + bottom) / 2, EGERGB(getBoderRed(), getBoderGreen(), gerBoderBlue()));
	}
	getch();
	getchar();
	//cleardevice();
}