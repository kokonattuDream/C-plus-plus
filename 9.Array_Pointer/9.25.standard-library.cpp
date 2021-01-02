#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
int find()
{
  std::array arr{ 13, 90, 99, 5, 40, 80 };
 
  std::cout << "Enter a value to search for and replace with: ";  
  int search{};
  int replace{};
  std::cin >> search >> replace;
 
  // Input validation omitted
 
  // std::find returns an iterator pointing to the found element (or the end of the container)
  // we'll store it in a variable, using type inference to deduce the type of
  // the iterator (since we don't care)
  auto found{ std::find(arr.begin(), arr.end(), search) };
 
  // Algorithms that don't find what they were looking for return the end iterator.
  // We can access it by using the end() member function.
  if (found == arr.end())
  {
    std::cout << "Could not find " << search << '\n';
  }
  else
  {
    // Override the found element.
    *found = replace;
  }
 
  for (int i : arr)
  {
    std::cout << i << ' ';
  }
 
  std::cout << '\n';
 
  return 0;
}
 
// Our function will return true if the element matches
bool containsNut(std::string_view str)
{
  // std::string_view::find returns std::string_view::npos if it doesn't find
  // the substring. Otherwise it returns the index where the substring occurs
  // in str.
  return (str.find("nut") != std::string_view::npos);
}
int foundIf()
{
  std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
 
  // Scan our array to see if any elements contain the "nut" substring
  auto found{ std::find_if(arr.begin(), arr.end(), containsNut) };
 
  if (found == arr.end())
  {
    std::cout << "No nuts\n";
  }
  else
  {
    std::cout << "Found " << *found << '\n';
  }
 
  return 0;
}
 
bool containsNut(std::string_view str)
{
  return (str.find("nut") != std::string_view::npos);
}
 
int count()
{
  std::array<std::string_view, 5> arr{ "apple", "banana", "walnut", "lemon", "peanut" };
 
  auto nuts{ std::count_if(arr.begin(), arr.end(), containsNut) };
 
  std::cout << "Counted " << nuts << " nut(s)\n";
 
  return 0;
}

bool greater(int a, int b)
{
  // Order @a before @b if @a is greater than @b.
  return (a > b);
}
int sort()
{
  std::array arr{ 13, 90, 99, 5, 40, 80 };
 
  // Pass greater to std::sort
  std::sort(arr.begin(), arr.end(), greater);
 
  for (int i : arr)
  {
    std::cout << i << ' ';
  }
 
  std::cout << '\n';
 
  return 0;
}

void doubleNumber(int &i)
{
  i *= 2;
}
int forEach()
{
  std::array arr{ 1, 2, 3, 4 };
 
  std::for_each(arr.begin(), arr.end(), doubleNumber);
 
  for (int i : arr)
  {
    std::cout << i << ' ';
  }
 //2 4 6 8
  std::cout << '\n';
 
  return 0;
}