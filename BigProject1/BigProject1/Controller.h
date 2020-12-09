#pragma once
#include "Color.h"
class Controller
{
public:
	Controller() = default;
	Controller(int width_, int height_, Color boderColor);
	Controller(Color boderColor);
	~Controller();
	int getBoderRed();//»ñÈ¡±ßÔµÑÕÉ«
	int getBoderGreen();
	int gerBoderBlue();
	void setBoderColor(int r, int g, int b);

	virtual void draw() = 0;
private:
	int Width{ 800 };
	int Height{ 600 };
	Color boderColor;
};
