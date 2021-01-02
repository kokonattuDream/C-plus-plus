#include <iostream>

void addOne(int &ref)
{
    ref = ref + 1;
}
 
int main()
{
    int value = 5;
 
    std::cout << "value = " << value << '\n'; //5
    addOne(value);
    std::cout << "value = " << value << '\n'; //6
    return 0;
}