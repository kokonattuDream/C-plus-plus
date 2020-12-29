#include <iostream>
int value { 5 }; // global variable
 
int main()
{
    int value { 7 }; // hides the global variable value
    ++value; // increments local value, not global value
 
    --(::value); // decrements global value, not local value (parenthesis added for readability)
 
    std::cout << "local variable value: " << value << '\n'; // local variable value: 8
    std::cout << "global variable value: " << ::value << '\n'; //global variable value: 4
 
    return 0;
} // local value is destroyed