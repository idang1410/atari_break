#pragma once

#include "Colors.h"
#include "Pixel.h"

class Shape
{
public:
	Shape(Color color, Pixel location) : _color(color), _location(location) {}
	//virtual Pixel[] getPixels() = 0;

protected:
	Color _color;
	Pixel _location;
};