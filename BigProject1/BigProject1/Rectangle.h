#pragma once
#include "Shape.h"

class RECTANGLE : public Shape
{
public:
	RECTANGLE();
	RECTANGLE(int top, int bottom, int left, int right, Color boderColor, Color fillColor);
	RECTANGLE(int top, int bottom, int left, int right, Color boderColor);
	void setCoordinate(int top, int bottom, int left, int right);
	int getTop();
	int getBottom();
	int getLeft();
	int getRight();

	~RECTANGLE();

	void draw() override;

private:
	int top{ 0 };
	int bottom{ 0 };
	int left{ 0 };
	int right{ 0 };
	friend class Controller;
};
