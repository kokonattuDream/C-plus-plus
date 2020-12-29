#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // declaring variables:
  int a, b;
  int result;

  // process:
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;

  // print out the result:
  cout << result;

  int foo = 0;
  auto bar = foo;  // the same as: int bar = foo; 
  decltype(foo) c;  // the same as: int bar; 

  string mystring;
  mystring = "This is a string";
  cout << mystring << endl;

  return 0;
}