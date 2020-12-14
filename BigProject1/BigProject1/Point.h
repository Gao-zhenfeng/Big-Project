#pragma once
#include <iostream>

class Point
{
public:
	Point() = default;
	Point(int _x, int _y);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	std::string getXY();

private:
	int x{ 0 };
	int y{ 0 };
};
