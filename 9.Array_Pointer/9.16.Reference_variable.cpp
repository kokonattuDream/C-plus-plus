
struct Something
{
    int value1;
    float value2;
};
 
struct Other
{
    Something something;
    int otherValue;
};

#include <iostream>
 
// ref is a reference to the argument passed in, not a copy
void changeN(int &ref)
{
	ref = 6;
}
// Note: You need to specify the array size in the function declaration
void printElements(int (&arr)[4])
{
  int length{ static_cast<int>(std::size(arr)) }; // we can now do this since the array won't decay
  
  for (int i{ 0 }; i < length; ++i)
  {
    std::cout << arr[i] << '\n';
  }
}
int main()
{

  int x{ 5 }; // normal integer
  int &y{ x }; // y is a reference to x
  int &z{ y }; // z is also a reference to x

  int value{ 5 };
  int &ref{ value }; // valid reference, initialized to variable value
  int &invalidRef; // invalid, needs to reference something

  // l-value is a value that has an address.
  // r-value is an expression that is not an l-value.
  const int y{ 7 };
  int &ref2{ y }; // not okay, y is a const l-value
  int &ref3{ 6 }; // not okay, 6 is an r-value

  //References can not be reassigned
  int value1{ 5 };
  int value2{ 6 };
  int &ref{ value1 }; // okay, ref is now an alias for value1
  ref = value2; // assigns 6 (the value of value2) to value1 -- does NOT change the reference!


  Other other;
  //Same
  other.something.value1 = 5;
  ref = 5; 


  //Reference vs Pointer
  int valueX{ 5 };
  int *const ptrX{ &valueX };
  int &refX{ valueX };

  *ptrX = 5;
  refX = 5;



  int value{ 5 }; // normal integer
  int &ref{ value }; // reference to variable value

  value = 6; // value is now 6
  ref = 7; // value is now 7

  std::cout << value << '\n'; // prints 7
  ++ref;
  std::cout << value << '\n'; // prints 8
  std::cout << &value; // prints 0012FF7C
  std::cout << &ref; // prints 0012FF7C
 

  int n{ 5 };
  changeN(n); // 5 -> 6

  int arr[]{ 99, 20, 14, 80 };
  printElements(arr);

    return 0;
}