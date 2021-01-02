#include <iostream>

int sumArray(const int array[]) // array is a pointer
{
    int sum{ 0 };
    for (auto number : array) // compile error, the size of array isn't known
    {
        sum += number;
    }
    return sum;   
}

int main()
{
    constexpr int fibonacci[]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    for (int number : fibonacci) // iterate over array fibonacci
    {
       std::cout << number << ' '; // we access the array element for this iteration through variable number
    }

    for (auto number : fibonacci) // type is auto, so number has its type deduced from the fibonacci array
    {
       std::cout << number << ' ';
    }

    std::string array[]{ "peter", "likes", "frozen", "yogurt" };
    for (auto element : array) // element will be a copy of the current array element
    {
        std::cout << element << ' ';
    }

    for (auto &element: array) // The ampersand makes element a reference to the actual array element, preventing a copy from being made
    {
        std::cout << element << ' ';
    }

    for (const auto &element: array) // element is a const reference to the currently iterated array element
    {
        std::cout << element << ' ';
    }

    std::vector fibonacciV{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; // note use of std::vector here rather than a fixed array
    // Before C++17
    // std::vector<int> fibonacci{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
 
    for (auto number : fibonacciV)
    {
        std::cout << number << ' ';
    }

    constexpr int arrayX[]{ 9, 7, 5, 3, 1 };
 
    std::cout << sumArray(arrayX) << '\n'; // array decays into a pointer here
    

    std::string names[]{ "Alex", "Betty", "Caroline", "Dave", "Emily" }; // Names of the students
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    int maxScore{ 0 };
 
    for (int i{ 0 }; auto score : scores) // i is the index of the current element
    {
        if (score > maxScore)
        {
            std::cout << names[i] << " beat the previous best score of " << maxScore << " by " << (score - maxScore) << " points!\n";
            maxScore = score;
        }
        
        ++i;
    }
    
    return 0;
}