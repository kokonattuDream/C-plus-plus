
#include <iostream>
#include <string>

struct Person
{
    int age{};
    double weight{};
};
 
struct Paw
{
    int claws{};
};
 
struct Animal
{
    std::string name{};
    Paw paw{};
};
 
int main()
{

    Person person{}; // define a person
    // Member selection using reference to struct
    Person &ref{ person };
    ref.age = 5;
    // Member selection using pointer to struct
    Person *ptr{ &person };
    ptr->age = 5;
    (*ptr).age = 5;

    Animal puma{ "Puma", { 5 } };
 
    Animal* pointy{ &puma };
 
    // pointy is a pointer, use ->
    // paw is not a pointer, use .
    std::cout << pointy->paw.claws << '\n';
 
    return 0;
}