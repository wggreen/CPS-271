//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include <iostream>
#include "pointType.h"
#include "circleType.h"
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
using std::cout;

circleType::circleType()
{
	center = pointType();
	radius = 0;
	area = 0;
	circumference = 0;
}

circleType::circleType(float circleRadius)
{
	setRadius(circleRadius);
	calculateArea();
	calculateCircumference();
}

void circleType::setCenter(int xCoord, int yCoord)
{
	center.setX(xCoord);
	center.setY(yCoord);
}

void circleType::setRadius(float radiusMeasure)
{
	radius = radiusMeasure;
}

void circleType::printRadius()
{
	cout << "\nThe radius is " << radius << "\n" << endl;

}

void circleType::calculateArea()
{
	area = M_PI * radius * radius;
}

void circleType::printArea()
{
	cout << "\nThe area is " << area << "\n" << endl;
}

void circleType::calculateCircumference()
{
	circumference = 2 * M_PI * radius;
}

void circleType::printCircumference()
{
	cout << "\nThe circumference is " << circumference << "\n" << endl;
}