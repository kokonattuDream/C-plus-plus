#include <iostream>
int main()
{
    std::cout << "Hello" << " world!";
    int x{ 5 };
    std::cout << "x is equal to: " << x;

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
    std::cout << "My name is Alex." << std::endl;


    std::cout << "Enter a number: "; // ask user for a number
    int x{ }; // define variable x to hold user input (and zero-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    
    return 0;
}