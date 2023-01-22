//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include "pointType.h"
#include "pointType.cpp"

class circleType : public pointType {

	float radius;
	float area;
	float circumference;

public:

	pointType center;

	circleType();

	void setCenter(int x, int y);

	circleType(float radius);

	void setRadius(float radius);

	void printRadius();

	void calculateArea();

	void printArea();

	void calculateCircumference();

	void printCircumference();

};