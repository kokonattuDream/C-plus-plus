
#include <algorithm> // for std::sort
#include <array>
#include <iostream>
 

struct House
{
    int number{};
    int stories{};
    int roomsPerStory{};
};
 
struct Array
{
    House value[3]{};
};
 
int main()
{
    std::array myArray { 7, 3, 1, 9, 5 };
    std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//  std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards
 
    for (int element : myArray)
        std::cout << element << ' ';
    for (std::size_t i{ 0 }; i < myArray.size(); ++i)
        std::cout << myArray[i] << ' ';
        
    myArray.at(1) = 6; // array element 1 is valid, sets array element 1 to value 6
    myArray.at(9) = 10; // array element 9 is invalid, will throw an error

    
    Array houses{
        { { 13, 4, 30 }, { 14, 3, 10 }, { 15, 3, 40 } }
    };
 
    for (const auto& house : houses.value)
    {
        std::cout << "House number " << house.number
                  << " has " << (house.stories * house.roomsPerStory)
                  << " rooms\n";
    }
    return 0;
}