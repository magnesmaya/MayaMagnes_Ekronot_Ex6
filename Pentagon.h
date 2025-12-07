#pragma once
#include "Shape.h"
#include "MathUtils.h"
#include <Math.h>
#include <iostream>

class Pentagon : Shape
{
public:
	Pentagon(std::string name, std::string color, double side);
	void setSide(double side);

protected: 
	double side;
};