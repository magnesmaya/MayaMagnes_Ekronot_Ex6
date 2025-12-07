#pragma once
#include <exception>

class ShapeException : public std::exception
{
public://added the public
	virtual const char* what() const
	{
		return "This is a shape exception!";
	}
};