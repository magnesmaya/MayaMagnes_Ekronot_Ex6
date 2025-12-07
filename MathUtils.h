#pragma once
#include <iostream>
#include <math.h>

class MathUtils
{
public:
	static double CalPentagonArea(double side)
	{
		double area = ((side * side) / 4) * (sqrt(25 + 10 * sqrt(5)));
		return area;
	}

	static double CalHexagonArea(double side)
	{
		double area = ((side * side) * ((3 * sqrt(3))/2);
		return area;
	}
};