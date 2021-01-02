
#include <iostream>
 
void foo(int y)
{
    std::cout << "y = " << y << '\n'; //5
 
    y = 6;
 
    std::cout << "y = " << y << '\n'; //6
} // y is destroyed here
 
int main()
{
    int x = 5;
    std::cout << "x = " << x << '\n'; //5
    
    foo(x);
 
    std::cout << "x = " << x << '\n'; //5
    return 0;
}