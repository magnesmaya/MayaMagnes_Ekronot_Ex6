#include "Pentagon.h"
#include "Shape.h"
#include "MathUtils.h"
#include <Math.h>
#include <iostream>

Pentagon::Pentagon(std::string name, std::string color, double side) :
	Shape(name, color)
{
	Pentagon::setSide(side);
}

void Pentagon::setSide(double side)
{
	this->side = side;
}