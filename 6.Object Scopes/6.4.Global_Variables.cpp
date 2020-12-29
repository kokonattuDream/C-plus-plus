#include <iostream>
 
const int g_x; // error: constant variables must be initialized
constexpr int g_w; // error: constant variables must be initialized
 
const int g_y { 1 };  // const global variable g_y, initialized with a value
constexpr int g_z { 2 }; // constexpr global variable g_z, initialized with a value
 
void doSomething()
{
    // global variables can be seen and used everywhere in the file
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';
}
 
int main()
{
    doSomething();
 
    // global variables can be seen and used everywhere in the file
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';
 
    return 0;
}
// g_y and g_z goes out of scope here