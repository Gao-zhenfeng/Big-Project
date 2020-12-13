#include <iostream>
#include "Controller.h"
#include "Rectangle.h"
#include "Circle.h"

//#include <graphics.h>
//include "graphics.h"会报错，暂没查明原因

int main()
{
	//Circle c1{ 300, 300, 50, Color{0, 0, 0} ,Color{255, 0, 255}, 640, 480 };
	Circle c1{ 300, 300, 50, Color{0, 0, 0} };

	c1.draw();

	Rectangle r1{ 300, 200, 200, 300, Color {123,255,234} };
	r1.draw();

	return 0;
}