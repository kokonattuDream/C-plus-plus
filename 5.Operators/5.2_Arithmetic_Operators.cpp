#include <iostream>
 
int main()
{
    int x{ 7 };
    int y{ 4 };
 
    std::cout << "int / int = " << x / y << '\n';
    //int / int = 1
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    //double / int = 1.75
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    //int / double = 1.75
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';
    //double / double = 1.75

    return 0;
}