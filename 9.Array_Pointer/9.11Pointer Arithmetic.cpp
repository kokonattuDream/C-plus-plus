#include <iostream>
#include <iterator> // for std::size

bool isVowel(char ch)
{
  switch (ch)
  {
  case 'A':
  case 'a':
  case 'E':
  case 'e':
  case 'I':
  case 'i':
  case 'O':
  case 'o':
  case 'U':
  case 'u':
    return true;
  default:
    return false;
  }
}
 

int main()
{
     int array []{ 9, 7, 5, 3, 1 };
 
     std::cout << &array[1] << '\n'; // print memory address of array element 1
     //0017FB80
     std::cout << array+1 << '\n'; // print memory address of array pointer + 1 
     //0017FB80
     std::cout << array[1] << '\n'; // prints 7
     std::cout << *(array+1) << '\n'; // prints 7 (note the parenthesis required here)
    

    char name[]{ "Mollie" };
    int arrayLength{ static_cast<int>(std::size(name)) };
    int numVowels{ 0 };
    for (char *ptr{ name }; ptr < (name + arrayLength); ++ptr)
    {
        if (isVowel(*ptr))
        {
            ++numVowels;
        }
    }

    return 0;
}