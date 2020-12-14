#pragma once
#include "Color.h"
class Controller
{
public:
	Controller() = default;
	Controller(int width_, int height_);
	~Controller();

private:
	int Width{ 800 };
	int Height{ 600 };
};
