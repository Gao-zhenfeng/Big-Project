#pragma once
#include "Controller.h"

class Rectangle : public Controller
{
public:
	Rectangle();
	Rectangle(int top, int bottom, int left, int right, Color boderColor, Color fillColor, int Width, int Height);
	Rectangle(int top, int bottom, int left, int right, Color boderColor, Color fillColor);
	void setCoordinate(int top, int bottom, int left, int right);
	int getTop();
	int getBottom();
	int getLeft();
	int getRight();

	~Rectangle();

	void draw() override;

private:
	int top{ 0 };
	int bottom{ 0 };
	int left{ 0 };
	int right{ 0 };
	Color* fillColor;
};
