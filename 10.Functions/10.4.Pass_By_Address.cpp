#include <iostream>
void printArray(const int  *array, int length)
{
    // if user passed in a null pointer for array, bail out early!
    if (!array)
        return;

    for (int index{ 0 }; index < length; ++index)
    {
        std::cout << array[index] << ' ';
    }
}
int printArrayCorrect()
{
    int array[6]{ 6, 5, 4, 3, 2, 1 }; // remember, arrays decay into pointers
    printArray(array, 6); // so array evaluates to a pointer to the first element of the array here, no & needed
}

void setToNull(int *tempPtr)
{
    // we're making tempPtr point at something else, not changing the value that tempPtr points to.
    tempPtr = nullptr; // use 0 instead if not C++11
}
 
int changePointer()
{ 
    // First we set ptr to the address of five, which means *ptr = 5
    int five{ 5 };
    int *ptr{ &five };
	
    // This will print 5
    std::cout << *ptr;
 
    // tempPtr will receive a copy of ptr
    setToNull(ptr);
 
    // ptr is still set to the address of five!
 
    // This will print 5
    if (ptr)
        std::cout << *ptr;
    else
        std::cout << " ptr is null";
 
    return 0;
}

void setToSix(int *tempPtr)
{
    *tempPtr = 6; // we're changing the value that tempPtr (and ptr) points to
}
 
int changePointerContent()
{ 
    // First we set ptr to the address of five, which means *ptr = 5
    int five{ 5 };
    int *ptr{ &five };
	
    // This will print 5
    std::cout << *ptr;
 
    // tempPtr will receive a copy of ptr
    setToSix(ptr);
 
    // tempPtr changed the value being pointed to to 6, so ptr is now pointing to the value 6
 
    // This will print 6
    if (ptr)
        std::cout << *ptr;
    else
        std::cout << " ptr is null";
 
    return 0;
}

void setToAddressNull(int *&tempPtr)
{
    tempPtr = nullptr; // use 0 instead if not C++11
}
 
int passPointerByReference()
{ 
    // First we set ptr to the address of five, which means *ptr = 5
    int five{ 5 };
    int *ptr{ &five };
	
    // This will print 5
    std::cout << *ptr;
 
    // tempPtr is set as a reference to ptr
    setToAddressNull(ptr);
 
    // ptr has now been changed to nullptr!
 
    if (ptr)
        std::cout << *ptr;
    else
        std::cout << " ptr is null";
 
    return 0;
}
/**

int foo1(int x); // pass by value
int foo2(int &x); // pass by reference
int foo3(int *x); // pass by address
 
int i {};
 
foo1(i);  // can't modify i
foo2(i);  // can modify i
foo3(&i); // can modify i

**/