#include "6.8.global_internal.h" // include a copy of each constant in this file
 
#include <iostream>
 
int main()
{
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;
 
    std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';
 
    return 0;
}
