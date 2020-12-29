#include "6.8.global_external.h" // include all the forward declarations
 
#include <iostream>
 
int main()
{
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;
 
    std::cout << "The circumference is: " << 2.0 * radius * constants::pi << '\n';
 
    return 0;
}