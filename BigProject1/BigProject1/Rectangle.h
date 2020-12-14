#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle() = default;
	Rectangle(int top, int bottom, int left, int right, Color boderColor, Color fillColor);
	Rectangle(int top, int bottom, int left, int right, Color boderColor);
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
};
