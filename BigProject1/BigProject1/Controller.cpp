#include "Controller.h"
#include <graphics.h>
Controller::Controller(int width_, int height_, Color boderColor)
	: Width{ width_ }, Height{ height_ }, boderColor{ boderColor }
{
	initgraph(Width, Height);
	setbkcolor(WHITE);
}

Controller::Controller(Color boderColor) : boderColor{ boderColor }
{
	initgraph(Width, Height);
	setbkcolor(WHITE);
}

Controller::~Controller()
{
	closegraph();
	//setbkcolor()
}

int Controller::getBoderRed()
{
	return boderColor.getRed();
}

int Controller::getBoderGreen()
{
	return boderColor.getGreen();
}

int Controller::gerBoderBlue()
{
	return boderColor.getBlue();
}

void Controller::setBoderColor(int r, int g, int b)
{
	boderColor.setColor(r, g, b);
}