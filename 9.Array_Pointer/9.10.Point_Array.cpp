#include <iostream>
 
void printSize(int *array)
{
    // array is treated as a pointer here
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

void printSizeArray(int array[])
{
    // array is treated as a pointer here, not a fixed array
    std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

void changeArray(int *ptr)
{
    *ptr = 5; // so changing an array element changes the _actual_ array
}
 
int main()
{
    int array[5]{ 9, 7, 5, 3, 1 };
    // print address of the array's first element
    std::cout << "Element 0 has address: " << &array[0] << '\n';
    //0042FD5C
    // print the value of the pointer the array decays to
    std::cout << "The array decays to a pointer holding address: " << array << '\n';
    //0042FD5C

    std::cout << *array; // will print 9!
    char name[]{ "Jason" }; // C-style string (also an array)
    std::cout << *name << '\n'; // will print 'J'

    int *ptr{ array };
    std::cout << *ptr << '\n'; // will print 9
    std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
    //20
    std::cout << sizeof(ptr) << '\n'; // will print the size of a pointer
    //4
    printSize(array); // the array argument decays into a pointer here
    //4
    printSizeArray(array);
    //4
    changeArray(array); //9 -> 5

    return 0;
}
