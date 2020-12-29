#include <iostream>

double doDivision(int x, int y)
{
    if (y == 0)
    {
        std::cerr << "Error: Could not divide by zero\n";
        std::exit(1);
    }
    return static_cast<double>(x) / y;
}

bool printDivision(int x, int y)
{
    if (y == 0)
    {
        std::cerr << "Error: could not divide by zero\n";
        return false;
    }
    
    std::cout << static_cast<double>(x) / y;
 
    return true;
}