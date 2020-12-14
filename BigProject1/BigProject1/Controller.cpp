#include "Controller.h"
#include <graphics.h>
#include <iostream>
Controller::Controller(int width_, int height_)
	: Width{ width_ }, Height{ height_ }
{
	initgraph(width_, height_);
	setbkcolor(WHITE);
}

Controller::~Controller()
{
	closegraph();
}