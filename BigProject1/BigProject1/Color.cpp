#include "Color.h"
#include<string>

Color::Color(int Red, int Green, int Blue)
	:R{ Red }, G{ Green }, B{ Blue }
{
}

void Color::setColor(int Red, int Green, int Blue)
{
	R = Red;
	G = Green;
	B = Blue;
}

std::string Color::getColor()
{
	return ("RGB : " + std::to_string(R) + " " + std::to_string(G) + " " + std::to_string(B));
}

int Color::getRed()
{
	return R;
}
int Color::getGreen()
{
	return G;
}
int Color::getBlue()
{
	return B;
}