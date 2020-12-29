
#include "4.13.Constant.h"
#include <iostream>

void printInteger(const int myValue)
{
    std::cout << myValue;
}


int main()
{

    const double gravity { 9.8 }; // preferred use of const before type
    int const sidesInSquare { 4 }; // okay, but not preferred

    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;
 
    double circumference { 2.0 * radius * constants::pi };
    std::cout << "The circumference is: " << circumference << '\n';

    //Any variable that should not be modifiable after 
    //initialization and whose initializer is known 
    //at compile-time should be declared as constexpr.

    //Any variable that should not be modifiable after 
    //initialization and whose initializer is not known 
    //at compile-time should be declared as const.

    constexpr double gravity { 9.8 }; // ok, the value of 9.8 can be resolved at compile-time
constexpr int sum { 4 + 5 }; // ok, the value of 4 + 5 can be resolved at compile-time
 
    return 0;
}