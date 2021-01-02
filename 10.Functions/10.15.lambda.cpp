#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <functional>

int lambda()
{
  // A regular function pointer. Only works with an empty capture clause.
  double (*addNumbers1)(double, double){
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers1(1, 2);
 
  // Using std::function. The lambda could have a non-empty capture clause (Next lesson).
  std::function addNumbers2{ // note: pre-C++17, use std::function<double(double, double)> instead
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers2(3, 4);
 
  // Using auto. Stores the lambda with its real type.
  auto addNumbers3{
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers3(5, 6);
 
  return 0;
}


int typeDeduction()
{
  // note: explicitly specifying this returns a double
  auto divide{ [](int x, int y, bool bInteger) -> double {
    if (bInteger)
      return x / y; // will do an implicit conversion to double
    else
      return static_cast<double>(x) / y;
  } };
 
  std::cout << divide(3, 2, true) << '\n';
  std::cout << divide(3, 2, false) << '\n';
 
  return 0;
}

int genericLambda()
{
  // Print a value and count how many times @print has been called.
  auto print{
    [](auto value) {
      static int callCount{ 0 };
      std::cout << callCount++ << ": " << value << '\n';
    }
  };
 
  print("hello"); // 0: hello
  print("world"); // 1: world
 
  print(1); // 0: 1
  print(2); // 1: 2
 
  print("ding dong"); // 2: ding dong
 
  return 0;
}