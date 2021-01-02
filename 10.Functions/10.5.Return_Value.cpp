#include <array>
#include <iostream>
#include <tuple>

int returnByValue(int x)
{
    int value{ x * 2 };
    return value; // A copy of value will be returned here
} // value goes out of scope here

int* returnByAddress(int size)
{
    return new int[size];
}
 
int allocateArray()
{
    int *array{ returnByAddress(25) };
 
    // do stuff with array
 
    delete[] array;
    return 0;
}

// Returns a reference to the index element of array
int& returnByReference(std::array<int, 25> &array, int index)
{
    // we know that array[index] will not be destroyed when we return to the caller (since the caller passed in the array in the first place!)
    // so it's okay to return it by reference
    return array[index];
}
 
int main()
{
    std::array<int, 25> array;
 
    // Set the element of array with index 10 to the value 5
    returnByReference(array, 10) = 5;
	
    std::cout << array[10] << '\n';
 
    return 0;
}

std::tuple<int, double> returnTuple() // return a tuple that contains an int and a double
{
	return { 5, 6.7 };
}
 
int returnMultiple()
{
	auto [a, b]{ returnTuple() }; // used structured binding declaration to put results of tuple in variables a and b
	std::cout << a << ' ' << b << '\n';
 
	return 0;
}