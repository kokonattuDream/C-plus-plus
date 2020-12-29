#include <iostream>
/**
 * 
Size/Type	Range
1 byte unsigned	0 to 255
2 byte unsigned	0 to 65,535
4 byte unsigned	0 to 4,294,967,295
8 byte unsigned	0 to 18,446,744,073,709,551,615

 * 
 */
int main()
{
    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';
 
    x = 65536; // 65536 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
 
    x = 65537; // 65537 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';

    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';
 
    x = -1; // -1 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
 
    x = -2; // -2 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';

    unsigned int a{ 3 };
	unsigned int b{ 5 };
 
	std::cout << a - b << '\n';
 
    return 0;
}