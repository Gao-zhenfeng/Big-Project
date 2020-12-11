#include "Controller.h"
#include "Rectangle.h"
#include "Circle.h"

//include "graphics.h"会报错，暂没查明原因

int main()
{
	Circle c1{ 300, 300, 300, Color{0, 0, 0}, Color{0, 255, 255} };
	c1.draw();
	Rectangle r1{ 300, 200, 200, 300, Color {123,255,234}, Color{255,0,0} };
	r1.draw();

	return 0;
}