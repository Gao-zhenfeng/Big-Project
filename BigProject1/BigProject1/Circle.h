#pragma once
#include "Controller.h"
class Circle : public Controller
{
public:
	Circle() = default;
	Circle(int x, int y, int r, Color boderColor, Color fillColor, int Width, int Height);
	Circle(int x, int y, int r, Color boderColor, Color fillColor);
	void setCenterX(int x);
	void setCenterY(int y);
	int getCenterX();
	int getCenterY();

	void draw() override;
private:
	int centerX{ 0 };
	int centerY{ 0 };
	int radius{ 0 };
	Color* fillColor{ nullptr };
};
