
#include <iostream>
 
int main()
{
    int x{ 5 };
    std::cout << x << '\n'; // print the value of variable x
    //5
    std::cout << &x << '\n'; // print the memory address of variable x
    //0012FF7C
    std::cout << *(&x) << '\n'; /// print the value at the memory address of variable x (parenthesis not required, but make it easier to read)
    //5


    int v{ 5 };
    int *ptr{ &v }; // initialize ptr with address of variable v
    std::cout << &v << '\n'; // print the address of variable v
    //0012FF7C
    std::cout << ptr << '\n'; // print the address that ptr is holding
    //0012FF7C


    int x{ 4 };
    std::cout << typeid(&x).name() << '\n';
    //int *


    int value{ 5 };
    std::cout << &value; // prints address of value
    //0012FF7C
    std::cout << value; // prints contents of value
    //5
    int *ptr{ &value }; // ptr points to value
    std::cout << ptr; // prints address held in ptr, which is &value
    //0012FF7C
    std::cout << *ptr; // Indirection through ptr (get the value that ptr is pointing to)
    //5

    int value{ 5 };
    int *ptr{ &value }; // ptr points to value
    
    *ptr = 7; // *ptr is the same as value, which is assigned 7
    std::cout << value << '\n'; // prints 7



    char *chPtr{}; // chars are 1 byte
    int *iPtr{}; // ints are usually 4 bytes
    
    struct Something
    {
        int x{};
        int y{};
        int z{};
    };
    
    Something *somethingPtr{}; // Something is probably 12 bytes
    
    std::cout << sizeof(chPtr) << '\n'; // prints 4
    std::cout << sizeof(iPtr) << '\n'; // prints 4
    std::cout << sizeof(somethingPtr) << '\n'; // prints 4


    

    return 0;
}