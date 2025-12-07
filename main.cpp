#include "Shape.h"
#include "Circle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "ShapeException.h"
#include "InputException.h"
#include <string>
#include <iostream>

int main()
{
	std::string nam, col; double rad = 0, ang = 0, ang2 = 180; int height = 0, width = 0;
	Circle circ(col, nam, rad);
	Quadrilateral quad(nam, col, width, height);
	rectangle rec(nam, col, width, height);
	Parallelogram para(nam, col, width, height, ang, ang2);

	Shape *ptrcirc = &circ;
	Shape *ptrquad = &quad;
	Shape *ptrrec = &rec;
	Shape *ptrpara = &para;


	
	std::cout << "Enter information for your objects" << std::endl;
	const char circle = 'c', quadrilateral = 'q', rectangle = 'r', parallelogram = 'p'; char shapetype;
	char x = 'y';
	while (x != 'x') {
		std::cout << "which shape would you like to work with?.. \nc=circle, q = quadrilateral, r = rectangle, p = parallelogram" << std::endl;
		std::cin >> shapetype;
		if (std::cin.peek() != '\n')
		{
			std::cout << "Warning - Dont try to build more than one shape at once" << std::endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		try
		{

			switch (shapetype) {
			case 'c':
				std::cout << "enter color, name,  rad for circle" << std::endl;
				std::cin >> col >> nam;
				if (!(std::cin >> rad))//checking if the input in not a string
				{
					std::cin.clear();
					throw InputException();
				}
				circ.setColor(col);
				circ.setName(nam);
				circ.setRad(rad);
				ptrcirc->draw();
				break;
			case 'q':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col;
				if (!(std::cin >> height >> width))//checking if the input in not a string
				{
					std::cin.clear();
					throw InputException();
				}
				quad.setName(nam);
				quad.setColor(col);
				quad.setHeight(height);
				quad.setWidth(width);
				ptrquad->draw();
				break;
			case 'r':
				std::cout << "enter name, color, height, width" << std::endl;
				std::cin >> nam >> col;
				if (!(std::cin >> height >> height >> width))//checking if the input in not a string
				{
					std::cin.clear();
					throw InputException();
				}
				rec.setName(nam);
				rec.setColor(col);
				rec.setHeight(height);
				rec.setWidth(width);
				ptrrec->draw();
				break;
			case 'p':
				std::cout << "enter name, color, height, width, 2 angles" << std::endl;
				std::cin >> nam >> col;
				if (!(std::cin >> height >> width >> ang >> ang2))//checking if the input in not a string
				{
					std::cin.clear();
					throw InputException();
				}
				para.setName(nam);
				para.setColor(col);
				para.setHeight(height);
				para.setWidth(width);
				para.setAngle(ang, ang2);
				ptrpara->draw();

			default:
				std::cout << "you have entered an invalid letter, please re-enter" << std::endl;
				break;
			}
			std::cout << "would you like to add more object press any key if not press x" << std::endl;
			std::cin.get() >> x;
		}
		catch (InputException& e)
		{
			printf(e.what());
		}
		catch (ShapeException& e)//added a catch to the shape eception
		{
			printf(e.what());
		}
		catch (std::exception& e)
		{			
			printf(e.what());
		}
		catch (...)
		{
			printf("caught a bad exception. continuing as usual\n");
		}
	}



		system("pause");
		return 0;
	
}