

#include <iostream>
 
void printIt(const int& x)
{
    std::cout << x;
}
 
int main()
{
    int value{ 5 };
    const int& ref{ value }; // create const reference to variable value
    value = 6; // okay, value is non-const
    ref = 7; // illegal -- ref is const



    int a{ 1 };
    printIt(a); // non-const l-value
 
    const int b{ 2 };
    printIt(b); // const l-value
 
    printIt(3); // literal r-value
 
    printIt(2+b); // expression r-value
 
    return 0;
}