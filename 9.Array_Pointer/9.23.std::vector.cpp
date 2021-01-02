#include <iostream>
#include <vector>
 
void printLength(const std::vector<int>& array)
{
    std::cout << "The length is: " << array.size() << '\n';
}
 
int main()
{
    std::vector array { 9, 7, 5, 3, 1 };
    printLength(array); //5
 
    array.resize(10); // set size to 10
    printLength(array); //10

    array[1] = 2; // no bounds checking
    array.at(2) = 3; // does bounds checking
    return 0;
}