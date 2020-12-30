#include <iostream>
 
struct Employee
{
    short id;
    int age;
    double wage;
};

struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};
 
void printInformation(Employee employee)
{
    std::cout << "ID:   " << employee.id << '\n';
    std::cout << "Age:  " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}
 
int main()
{
    Employee joe { 14, 32, 24.15 };
    Employee frank { 15, 28, 18.27 };
 
    // Print Joe's information
    printInformation(joe);
 
    std::cout << '\n';
 
    // Print Frank's information
    printInformation(frank);
 
    return 0;
}