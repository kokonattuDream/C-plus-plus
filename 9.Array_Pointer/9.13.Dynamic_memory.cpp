#include <iostream>
 
int main()
{
    int *ptr{ new int }; // dynamically allocate an integer
    *ptr = 7; // put a value in that memory location
 
    delete ptr; // return the memory to the operating system.  ptr is now a dangling pointer.
 
    std::cout << *ptr; // Indirection through a dangling pointer will cause undefined behavior
    delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.
 

    int *value{ new (std::nothrow) int{} }; // ask for an integer's worth of memory
    if (!value) // handle case where new returned null
    {
        // Do error handling here
        std::cout << "Could not allocate memory";
    }


    int value{ 5 };
    int *ptr{ new int{} }; // allocate memory
    delete ptr; // return memory back to operating system
    ptr = &value; // reassign pointer to address of value
    return 0;
}
