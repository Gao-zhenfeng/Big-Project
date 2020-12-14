#pragma once
#include "Color.h"
class Shape
{
public:
	Shape();
	Shape(Color boderColor, Color fillColor);
	Shape(Color boderColor);
	~Shape();
	void getFilledColor();
	void getBoderColor();

	bool getFilled();

	int getBoderRed();//获取边缘颜色
	int getBoderGreen();
	int gerBoderBlue();

	int getFilledRed();//获取填充颜色
	int getFilledGreen();
	int gerFilledBlue();

	void setBoderColor(int r, int g, int b);
	void setFilledColor(int r, int g, int b);

	virtual void draw() = 0;

private:
	Color* boderColor;
	Color* fillColor;
	bool filled;
};
