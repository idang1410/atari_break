#pragma once

#include "Colors.h"

class Pixel
{
private:
	int _width;
	int _hight;
	Color _color;

public:
	Pixel(int width, int hight, Color c);

	int getWidth();
	int getHight();
	Color getColor();

	void setWidth(int width);
	void setHight(int hight);
	void setColor(Color color);
};