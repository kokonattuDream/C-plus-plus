#include <algorithm> // std::equal
#include <cctype> // std::isdigit, std::isspace, std::isalpha
#include <iostream>
#include <map>
#include <string>
#include <string_view>
#include <limits>
 
bool inputMatches(std::string_view input, std::string_view pattern)
{
  if (input.length() != pattern.length())
  {
    return false;
  }
 
  // We have to use a C-style function pointer, because std::isdigit and friends
  // have overloads and would be ambiguous otherwise.
  static const std::map<char, int (*)(int)> validators{
    { '#', &std::isdigit },
    { '_', &std::isspace },
    { '@', &std::isalpha },
    { '?', [](int) { return 1; } }
  };
 
  // Before C++20, use
  // return std::equal(input.begin(), input.end(), pattern.begin(), [](char ch, char mask) -> bool {
  // ...
 
  return std::ranges::equal(input, pattern, [](char ch, char mask) -> bool {
    if (auto found{ validators.find(mask) }; found != validators.end())
    {
      // The pattern's current element was found in the validators. Call the
      // corresponding function.
      return (*found->second)(ch);
    }
    else
    {
      // The pattern's current element was not found in the validators. The
      // characters have to be an exact match.
      return (ch == mask);
    }
  });
}
 
int validateString()
{
  std::string phoneNumber{};
 
  do
  {
    std::cout << "Enter a phone number (###) ###-####: ";
    std::getline(std::cin, phoneNumber);
  } while (!inputMatches(phoneNumber, "(###) ###-####"));
 
  std::cout << "You entered: " << phoneNumber << '\n';
}


 
int validateNumber()
{
    int age{};
 
    while (true)
    {
        std::cout << "Enter your age: ";
        std::cin >> age;
 
        if (std::cin.fail()) // no extraction took place
        {
            std::cin.clear(); // reset the state bits back to goodbit so we can use ignore()
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear out the bad input from the stream
            continue; // try again
        }
 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // clear out any additional input from the stream
        if (std::cin.gcount() > 1) // if we cleared out more than one additional character
        {
            continue; // we'll consider this input to be invalid
        }
 
        if (age <= 0) // make sure age is positive
        {
            continue;
        }
 
        break;
    }
 
    std::cout << "You entered: " << age << '\n';
}


std::optional<int> extractAge(std::string_view age)
{
  int result{};
  auto end{ age.data() + age.length() };
 
  // Try to parse an int from age
  if (std::from_chars(age.data(), end, result).ptr != end)
  {
    return {};
  }
 
  if (result <= 0) // make sure age is positive
  {
    return {};
  }
 
  return result;
}
 
int validateNumberAsString()
{
  int age{};
 
  while (true)
  {
    std::cout << "Enter your age: ";
    std::string strAge{};
    std::cin >> strAge;
 
    if (auto extracted{ extractAge(strAge) })
    {
      age = *extracted;
      break;
    }
  }
 
  std::cout << "You entered: " << age << '\n';
}