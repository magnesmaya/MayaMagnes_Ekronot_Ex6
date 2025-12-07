#pragma once
#include "Shape.h"
#include "MathUtils.h"
#include <Math.h>
#include <iostream>

class Hexagon : Shape
{
public:
	Hexagon(std::string name, std::string color, double side);
	void setSide(double side);

protected:
	double side;
};