//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include <iostream>
#include "pointType.h"

using namespace std;
using std::cout;

pointType::pointType()
{
	int x = 0;
	int y = 0;
}

pointType::pointType(int xCoord, int yCoord)
{
	x = xCoord;
	y = yCoord;
}

void pointType::setX(int xCoord)
{
	x = xCoord;
}

void pointType::setY(int yCoord)
{
	y = yCoord;
}

void pointType::print()
{
	cout << "\nThe x coordinate is " << getX() << " and the y coordinate is " << getY() << "\n" << endl;
}

int pointType::getX()
{
	return x;
}

int pointType::getY()
{
	return y;
}