#include <iostream>
 
void incrementAndPrint()
{
    int value{ 1 }; // automatic duration by default
    ++value;
    std::cout << value << '\n';
} // value is destroyed here
 

void incrementAndPrintS()
{
    static int s_value{ 1 }; // static duration via static keyword.  This initializer is only executed once.
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int getInteger()
{
  static bool s_isFirstCall{ true };
 
  if (s_isFirstCall)
  {
    std::cout << "Enter an integer: ";
    s_isFirstCall = false;
  }
  else
  {
    std::cout << "Enter another integer: ";
  }
 
  int i{};
  std::cin >> i;
  return i;
}

int main()
{
    incrementAndPrint();// 2
    incrementAndPrint();// 2
    incrementAndPrint();// 2
    
    incrementAndPrintS();// 2
    incrementAndPrintS();// 3
    incrementAndPrintS();// 4

    int a{ getInteger() };
    int b{ getInteger() };
    std::cout << a << " + " << b << " = " << (a + b) << '\n';
    return 0;
}