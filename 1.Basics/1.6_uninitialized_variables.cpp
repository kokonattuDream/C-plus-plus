#include <iostream>
 

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}
int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value
    
    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen
    std::cout << x; // who knows what we'll get, because x is uninitialized
 
    return 0;
}