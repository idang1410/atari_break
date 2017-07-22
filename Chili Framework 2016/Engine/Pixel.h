#pragma once

#include "Colors.h"

class Pixel
{
private:
	int _width;
	int _hight;
	Color _color;

public:
	Pixel(int width, int hight, Color c) : _width(width), _hight(hight), _color(c) {}
	Pixel() : _width(0), _hight(0), _color(Color(255, 255, 255)) {}
	Pixel(const Pixel&) = default;

	int getWidth() { return _width; }
	int getHight() { return _hight; }
	Color getColor() { return Color(_color); }

	void setWidth(int width) { _width = width; }
	void setHight(int hight) { _hight = hight; }
	void setColor(Color color) { _color = Color(color); }
};