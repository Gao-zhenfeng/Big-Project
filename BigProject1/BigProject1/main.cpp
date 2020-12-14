#include <iostream>
#include <string>
#include "Controller.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;
//#include <graphics.h>
//include "graphics.h"会报错，暂没查明原因

int main()
{
	Circle c1{ 300, 300, 50, Color{0, 0, 0} };
	c1.draw();

	Rectangle r1{ 300, 200, 200, 300, Color {123,255,234} };
	r1.draw();

	Triangle t1{ Point{100,100}, Point {200, 200}, Point {300, 444}, Color{123,2,2}, Color{0,222,222} };
	t1.draw();

	return 0;
}