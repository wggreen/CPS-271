//William Green
//10-20-22
//CPS 271
//Machine Problem 4

#include "pointType.h"
#include "circleType.h"

class cylinderType : public circleType {
	int height;
	float volume;
	float surfaceArea;

public:

	circleType base;

	cylinderType();

	cylinderType(float radius, int height);

	float calculateVolume(float radius, int height);

	void printVolume();

	float calculateSurfaceArea(float radius, int height);

	void printSurfaceArea();

	void setHeight(int height);

	void setBaseRadius(float radius);

	void setBaseCenter(int x, int y);

};