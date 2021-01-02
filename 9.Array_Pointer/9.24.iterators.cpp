#include <array>
#include <iostream>
 
int main()
{
  std::array data{ 0, 1, 2, 3, 4, 5, 6 };
 

 //pointer iterator
  auto begin{ &data[0] };
  // note that this points to one spot beyond the last element
  auto end{ begin + std::size(data) };
  // for-loop with pointer
  for (auto ptr{ begin }; ptr != end; ++ptr) // ++ to move to next element
  {
    std::cout << *ptr << ' '; // Indirection to get value of current element
  }

    //standard library iterator
  auto begin{ std::begin(data) };
  auto end{ std::end(data) };
  for (auto p{ begin }; p != end; ++p) // ++ to move to next element.
  {
    std::cout << *p << ' '; // Indirection to get value of current element.
  }

  for (int i : data)
  {
    std::cout << i << ' ';
  }
 


  return 0;
}

int otherLoops()
{
  // The type is automatically deduced to std::array<int, 7> (Requires C++17).
  // Use the type std::array<int, 7> if your compiler doesn't support C++17.
  std::array data{ 0, 1, 2, 3, 4, 5, 6 };
  std::size_t length{ std::size(data) };
 
  // while-loop with explicit index
  std::size_t index{ 0 };
  while (index != length)
  {
    std::cout << data[index] << ' ';
    ++index;
  }
  std::cout << '\n';
 
  // for-loop with explicit index
  for (index = 0; index < length; ++index)
  {
    std::cout << data[index] << ' ';
  }
  std::cout << '\n';
 
  // for-loop with pointer (Note: ptr can't be const, because we increment it)
  for (auto ptr{ &data[0] }; ptr != (&data[0] + length); ++ptr)
  {
    std::cout << *ptr << ' ';
  }
  std::cout << '\n';
 
  // ranged-based for loop
  for (int i : data)
  {
    std::cout << i << ' ';
  }
  std::cout << '\n';
 
  return 0;
}
