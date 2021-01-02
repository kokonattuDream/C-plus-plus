#include <iostream>
 
void passValue(int value) // value is a copy of the argument
{
    value = 99; // so changing it here won't change the value of the argument
}
 
void passArray(int prime[5]) // prime is the actual array
{
    prime[0] = 11; // so changing it here will change the original argument!
    prime[1] = 7;
    prime[2] = 5;
    prime[3] = 3;
    prime[4] = 2;
}

void printSizeA(int array[])
{
    std::cout << std::size(array) << '\n'; // Error
}

void printSize(int array[])
{
    std::cout << sizeof(array) / sizeof(array[0]) << '\n';
}
 
int main()
{
    int value{ 1 };
    std::cout << "before passValue: " << value << '\n';//1
    passValue(value);
    std::cout << "after passValue: " << value << '\n';//1
 
    int prime[5]{ 2, 3, 5, 7, 11 };
    std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    //2 3 5 7 11
    passArray(prime);
    std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " " << prime[4] << '\n';
    //11 7 5 3 2

    std::cout << "The array has: " << std::size(prime) << " elements\n";
    return 0;
}