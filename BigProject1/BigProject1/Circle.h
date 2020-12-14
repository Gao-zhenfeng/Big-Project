#pragma once
#include "Controller.h"
class Circle : public Controller
{
public:
	Circle() = default;
	Circle(int x, int y, int r, Color boderColor, Color fillColor, int Width, int Height);
	Circle(int x, int y, int r, Color boderColor);
	~Circle();
	void setCenterX(int x);
	void setCenterY(int y);
	int getCenterX();
	int getCenterY();
	void setRadius(int r);
	int getRadius();
	void getFilledColor();
	void getBoderColor();

	int getBoderRed();//获取边缘颜色
	int getBoderGreen();
	int gerBoderBlue();

	int getFilledRed();//获取填充颜色
	int getFilledGreen();
	int gerFilledBlue();

	void setBoderColor(int r, int g, int b);
	void setFilledColor(int r, int g, int b);

	void draw() override;
private:
	int centerX{ 0 };
	int centerY{ 0 };
	int radius{ 0 };
	Color boderColor{ 0, 0, 0 };
	Color fillColor{ 255, 255, 255 };
	bool filled{ false };
};
