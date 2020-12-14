#pragma once
#include "Point.h"
#include "Controller.h"

class Triangle : public Controller
{
public:
	Triangle();
	Triangle(Point p1, Point p2, Point p3, Color boderColor, Color fillColor, int Width, int Height);
	Triangle(Point p1, Point p2, Point p3, Color boderColor);
	Triangle(Point p1, Point p2, Point p3, Color boderColor, Color fillColor);

	~Triangle();

	void setPoint(Point p, int num);//num is i, 修改Pointi, i<=3

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
	Point p1;
	Point p2;
	Point p3;
	Color boderColor{ 0, 0, 0 };
	Color fillColor{ 255, 255, 255 };
	bool filled{ false };
};
