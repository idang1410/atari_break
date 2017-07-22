#pragma once

#include "Colors.h"
#include "Pixel.h"

class Shape
{
public:
	Shape(Color color) : _color(color) { ; }
	virtual Pixel[] getPixels() = 0;

protected:
	Color _color;
	Pixel _location;
};