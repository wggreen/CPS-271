//Machine Problem 6
//William Green
//CPS 271
//11-17-2022

#include "myArray.h"


//Default Constructor
myArray::myArray() {};

//Constructor to be used when user inputs just length of the array
myArray::myArray(int arrayLength) {
	beginning = 0;
	end = arrayLength - 1;

    //Dynamic array
    dynamicArray = new int[arrayLength];

    //Deprecated fixed array
    //int fixedArray[10]{};
}

//Constructor to be used when user inputs beginning and end of array
myArray::myArray(int arrayBeginning, int arrayEnd) {
	beginning = arrayBeginning;
	end = arrayEnd -1;

    //Dynamic array
    dynamicArray = new int[arrayEnd];

    //Deprecated fixed array
    //int fixedArray[10]{};
}

//Destructor to free up the memory of the dynamic array
myArray::~myArray() {
    delete [] dynamicArray;
}

//Overloads the index operator to check if the index is valid
int myArray::operator[](int arrayIndex) {
    if (arrayIndex < 0 || arrayIndex > 4)
    {
        cout << "\nIndex " << arrayIndex << " is out of bounds" << endl;
        exit(1);

    }
    else {
        return dynamicArray[arrayIndex];

        //Deprecated fixed array functionality
        //return fixedArray[arrayIndex];
    }
}