//Machine Problem 6
//William Green
//CPS 271
//11-17-2022

#include <iostream>

using namespace std;

class myArray {

public:
    myArray();
    myArray(int length);
    myArray(int beginning, int end);
    ~myArray();

    int operator[](int index);

private:
    int beginning;
    int end;
    int* dynamicArray;

    //Deprecated fixed array
    //int fixedArray[5]{ 1, 2, 3, 4, 5 };

};