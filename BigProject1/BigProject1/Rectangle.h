#pragma once
#include "Controller.h"

class Rectangle : public Controller
{
public:
	Rectangle() = default;
	Rectangle(int top, int bottom, int left, int right, Color boderColor, Color fillColor, int Width, int Height);
	Rectangle(int top, int bottom, int left, int right, Color boderColor);
	void setCoordinate(int top, int bottom, int left, int right);
	int getTop();
	int getBottom();
	int getLeft();
	int getRight();
	bool getFilled();

	int getBoderRed();//获取边缘颜色
	int getBoderGreen();
	int gerBoderBlue();
	void setBoderColor(int r, int g, int b);

	~Rectangle();

	void draw() override;

private:
	int top{ 0 };
	int bottom{ 0 };
	int left{ 0 };
	int right{ 0 };
	Color boderColor;
	Color fillColor;
	bool filled{ false };
};
