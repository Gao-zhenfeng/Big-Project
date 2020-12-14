#include "Shape.h"

Shape::Shape()
{
	filled = false;
	boderColor = nullptr;
	fillColor = nullptr;
}

Shape::Shape(Color boderColor, Color fillColor)
{
	this->boderColor = new Color{ boderColor };
	this->fillColor = new Color{ fillColor };
	filled = true;
}

Shape::Shape(Color boderColor)
{
	this->boderColor = new Color{ boderColor };
	filled = false;
}

Shape::~Shape()
{
	delete boderColor;
	boderColor = nullptr;
	delete fillColor;
	fillColor = nullptr;
}

bool Shape::getFilled()
{
	return filled;
}

void Shape::getFilledColor()
{
	fillColor->getColor();
}

void Shape::getBoderColor()
{
	boderColor->getColor();
}

int Shape::getBoderRed()
{
	return boderColor->getRed();
}

int Shape::getBoderGreen()
{
	return boderColor->getGreen();
}

int Shape::gerBoderBlue()
{
	return boderColor->getBlue();
}

int Shape::getFilledRed()
{
	return fillColor->getRed();
}

int Shape::getFilledGreen()
{
	return fillColor->getGreen();
}

int Shape::gerFilledBlue()
{
	return fillColor->getBlue();
}

void Shape::setBoderColor(int r, int g, int b)
{
	boderColor->setColor(r, g, b);
}

void Shape::setFilledColor(int r, int g, int b)
{
	boderColor->setColor(r, g, b);
	filled = true;
}