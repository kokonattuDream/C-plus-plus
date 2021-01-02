#include <iostream>

void printValues(int x, int y=10) // 10 is the default argument, y is now an optional parameter
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}
 
int main()
{
    printValues(1); // y will use default argument 10
    printValues(3, 4); // y will use user-supplied argument 4
}