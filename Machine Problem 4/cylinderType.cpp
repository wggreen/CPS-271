//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include <iostream>
#include "pointType.h"
#include "circleType.h"
#include "cylinderType.h"
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
using std::cout;

cylinderType::cylinderType()
{
	height = 0;
	volume = 0;
	surfaceArea = 0;
	base = circleType();
}


cylinderType::cylinderType(float baseRadius, int cylinderHeight)
{
	height = cylinderHeight;
	calculateVolume(baseRadius, cylinderHeight);
	calculateSurfaceArea(baseRadius, cylinderHeight);
	setBaseRadius(baseRadius);
}

float cylinderType::calculateVolume(float baseRadius, int cylinderHeight)
{
	volume = M_PI * baseRadius * baseRadius * cylinderHeight;
}

void cylinderType::printVolume()
{
	cout << "\nThe volume is " << volume << "\n" << endl;
}

float cylinderType::calculateSurfaceArea(float baseRadius, int cylinderHeight)
{
	surfaceArea = (2 * M_PI * baseRadius * height) + (2 * M_PI * baseRadius * baseRadius);
}

void cylinderType::printSurfaceArea()
{
	cout << "\nThe volume is " << surfaceArea << "\n" << endl;
}

void cylinderType::setHeight(int cylinderHeight)
{
	height = cylinderHeight;
}

void cylinderType::setBaseRadius(float baseRadius)
{
	base.setRadius(baseRadius);
}

void cylinderType::setBaseCenter(int xCoord, int yCoord)
{
	base.setCenter(xCoord, yCoord);
}