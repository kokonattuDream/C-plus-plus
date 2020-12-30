
#include <string> // For std::string and std::getline
#include <iostream>
 
int main()
{
    std::string myName{ "Alex" }; // initialize myName with string literal "Alex"
    myName = "John"; // assign variable myName the string literal "John"

    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name); // read a full line of text into name
 
    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin, age); // read a full line of text into age
 
    std::cout << "Your name is " << name << " and your age is " << age << '\n';
 
    return 0;
}