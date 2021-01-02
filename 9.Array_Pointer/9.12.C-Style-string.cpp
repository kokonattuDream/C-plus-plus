#include <iostream>
 
int main()
{
    int nArray[5]{ 9, 7, 5, 3, 1 };
    char cArray[]{ "Hello!" };
    const char *name{ "Alex" };
 
    std::cout << nArray << '\n'; // nArray will decay to type int*
    //003AF738
    std::cout << cArray << '\n'; // cArray will decay to type char*
    //Hello!
    std::cout << name << '\n'; // name is already type char*
    //Alex
 
    return 0;
}