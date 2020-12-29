#include "2.12_square.h"
 #include <iostream>
int getSquareSides() // actual definition for getSquareSides
{
    int num = 4;
    std::cout << num << '\n';
    return num;
}
 
int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}