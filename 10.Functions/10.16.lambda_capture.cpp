#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
#include <string>
 
int captureClause()
{
  std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
 
  std::cout << "search for: ";
 
  std::string search{};
  std::cin >> search;
 
  // Capture @search                                vvvvvv
  auto found{ std::find_if(arr.begin(), arr.end(), [search](std::string_view str) {
    return (str.find(search) != std::string_view::npos);
  }) };
 
  if (found == arr.end())
  {
    std::cout << "Not found\n";
  }
  else
  {
    std::cout << "Found " << *found << '\n';
  }
 
  return 0;
}


int constant_capture()
{
  int ammo{ 10 };
 
  // Define a lambda and store it in a variable called "shoot".
  auto shoot{
    [ammo]() {
      // Illegal, ammo was captured as a const copy.
      --ammo;
 
      std::cout << "Pew! " << ammo << " shot(s) left.\n";
    }
  };
 
  // Call the lambda
  shoot();
 
  std::cout << ammo << " shot(s) left\n";
 
  return 0;
}

int mutable_capture()
{
  int ammo{ 10 };
 
  auto shoot{
    // Added mutable after the parameter list.
    [ammo]() mutable {
      // We're allowed to modify ammo now
      --ammo;
 
      std::cout << "Pew! " << ammo << " shot(s) left.\n";
    }
  };
 
  shoot();
  shoot();
 
  std::cout << ammo << " shot(s) left\n";
 
  return 0;
}

int reference_capture()
{
  int ammo{ 10 };
 
  auto shoot{
    // We don't need mutable anymore
    [&ammo]() { // &ammo means ammo is captured by reference
      // Changes to ammo will affect main's ammo
      --ammo;
 
      std::cout << "Pew! " << ammo << " shot(s) left.\n";
    }
  };
 
  shoot();
 
  std::cout << ammo << " shot(s) left\n";
 
  return 0;
}

int default_capture()
{
  std::array areas{ 100, 25, 121, 40, 56 };
 
  int width{};
  int height{};
 
  std::cout << "Enter width and height: ";
  std::cin >> width >> height;
 
  auto found{ std::find_if(areas.begin(), areas.end(),
                           [=](int knownArea) { // will default capture width and height by value
                             return (width * height == knownArea); // because they're mentioned here
                           }) };
 
  if (found == areas.end())
  {
    std::cout << "I don't know this area :(\n";
  }
  else
  {
    std::cout << "Area found :)\n";
  }
 
  return 0;
}

int defaultCaptures(){
    int health{ 33 };
int armor{ 100 };
std::vector<CEnemy> enemies{};
 
// Capture health and armor by value, and enemies by reference.
[health, armor, &enemies](){};
 
// Capture enemies by reference and everything else by value.
[=, &enemies](){};
 
// Capture armor by value and everything else by reference.
[&, armor](){};
 
// Illegal, we already said we want to capture everything by reference.
[&, &armor](){};
 
// Illegal, we already said we want to capture everything by value.
[=, armor](){};
 
// Illegal, armor appears twice.
[armor, &health, &armor](){};
 
// Illegal, the default capture has to be the first element in the capture group.
[armor, &](){};

}

int define_new_capture()
{
  std::array areas{ 100, 25, 121, 40, 56 };
 
  int width{};
  int height{};
 
  std::cout << "Enter width and height: ";
  std::cin >> width >> height;
 
  // We store areas, but the user entered width and height.
  // We need to calculate the area before we can search for it.
  auto found{ std::find_if(areas.begin(), areas.end(),
                           // Declare a new variable that's visible only to the lambda.
                           // The type of userArea is automatically deduced to int.
                           [userArea{ width * height }](int knownArea) {
                             return (userArea == knownArea);
                           }) };
 
  if (found == areas.end())
  {
    std::cout << "I don't know this area :(\n";
  }
  else
  {
    std::cout << "Area found :)\n";
  }
 
  return 0;
}

void invoke(const std::function<void(void)> &fn)
{
    fn();
}
 
int mutable_lambda()
{
    int i{ 0 };
 
    // Increments and prints its local copy of @i.
    auto count{ [i]() mutable {
      std::cout << ++i << '\n';
    } };
 
    // std::ref(count) ensures count is treated like a reference
    // thus, anything that tries to copy count will actually copy the reference
    // ensuring that only one count exists
    invoke(std::ref(count));
    invoke(std::ref(count));
    invoke(std::ref(count));
 
    return 0;
}