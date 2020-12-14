#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle() = default;
	Circle(int x, int y, int r, Color boderColor, Color fillColor);
	Circle(int x, int y, int r, Color boderColor);
	~Circle();
	void setCenterX(int x);
	void setCenterY(int y);
	int getCenterX();
	int getCenterY();
	void setRadius(int r);
	int getRadius();

	void draw() override;
private:
	int centerX{ 0 };
	int centerY{ 0 };
	int radius{ 0 };
};
