#pragma once
#include<string>

class Color
{
public:
	Color() = default;
	Color(int Red, int Green, int Blue);
	void setColor(int Red, int Green, int Blue);
	int getRed();
	int getGreen();
	int getBlue();
	std::string getColor();

private:
	int R{ 0 };//red
	int G{ 0 };//green
	int B{ 0 };//blue
};
