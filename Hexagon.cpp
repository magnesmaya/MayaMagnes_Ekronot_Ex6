#include "Hexagon.h"
#include "Shape.h"
#include "MathUtils.h"
#include <Math.h>
#include <iostream>

Hexagon::Hexagon(std::string name, std::string color, double side) :
	Shape(name, color)
{
	Hexagon::setSide(side);
}

void Hexagon::setSide(double side)
{
	this->side = side;
}