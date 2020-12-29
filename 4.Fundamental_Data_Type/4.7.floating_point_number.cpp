/**
 * 
Category	Type	Minimum Size	Typical Size
floating point	float	4 bytes	4 bytes
double	8 bytes	8 bytes
long double	8 bytes	8, 12, or 16 bytes


Size	Range	Precision
4 bytes	±1.18 x 10-38 to ±3.4 x 10^38	6-9 significant digits, typically 7
8 bytes	±2.23 x 10-308 to ±1.80 x 10^308	15-18 significant digits, typically 16
80-bits (typically uses 12 or 16 bytes)	±3.36 x 10^-4932 to ±1.18 x 10^4932	18-21 significant digits
16 bytes	±3.36 x 10^-4932 to ±1.18 x 10^4932	33-36 significant digits
*/

#include <iostream>
 
int main()
{
    std::cout << 9.87654321f << '\n'; // 9.87654
    std::cout << 987.654321f << '\n'; //987.654
    std::cout << 987654.321f << '\n'; //987654
    std::cout << 9876543.21f << '\n'; //9.87654e+006
    std::cout << 0.0000987654321f << '\n'; //9.87654e-005


    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n'; //1.#INF
 
    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n'; // -1.#INF
 
    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n'; //1.#IND (indeterminate)
 
    return 0;
}