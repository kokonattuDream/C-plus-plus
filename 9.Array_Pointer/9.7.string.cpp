
#include <cstring>
#include <iostream>
#include <string>
#include <string_view>

int main()
{
  char text[]{ "hello" };
  std::string str{ text };
  std::string more{ str };
 

  std::string_view text1{ "hello" }; // view the text "hello", which is stored in the binary
  std::string_view str1{ text1 }; // view of the same "hello"
  std::string_view more1{ str1 }; // view of the same "hello"
 
 

  std::string_view str{ "Trains are fast!" };
  std::cout << str.length() << '\n'; // 16
  std::cout << str.substr(0, str.find(' ')) << '\n'; // Trains
  std::cout << (str == "Trains are fast!") << '\n'; // 1
  // Since C++20
  std::cout << str.starts_with("Boats") << '\n'; // 0
  std::cout << str.ends_with("fast!") << '\n'; // 1
  std::cout << str << '\n'; // Trains are fast!


  char arr[]{ "Gold" };
  std::string_view str{ arr }; // Gold
  // Change 'd' to 'f' in arr
  arr[3] = 'f';// Golf




  std::string_view str1{ "Peach" };
  // Ignore the first characters.
  str1.remove_prefix(1);  //each
  // Ignore the last 2 characters.
  str1.remove_suffix(2);//ea


  std::string_view sv{ "balloon" };
  sv.remove_suffix(3);
  std::string str{ sv }; // convert from string_view to string
  std::string s = static_cast<std::string>(sv) // convert from string_view to string

  // Get the null-terminated C-style string.
  auto szNullTerminated{ str.c_str() };
  // Pass the null-terminated string to the function that we want to use.
  std::cout << str << " has " << std::strlen(szNullTerminated) << " letter(s)\n";

  return 0;
}