#pragma once

#include <iostream>
#include <vector>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using std::string;
using std::vector;

class Controller
{
public:
	Controller();
	Controller(int width_, int height_);
	~Controller();

private:
	int Width;
	int Height;
	std::string shape;
	RECTANGLE r;
	Circle c;
	//Triangle t;
};
