#include <iostream>
 
 int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;
    else
        return 20;
}
int main()
{
    int x = 3, y = 4;
    std::cout << (x > y) ? x : y; //it would evaluate as (std::cout << (x > y)) ? x : y;
    std::cout << ((x > y) ? x : y);

    const int classSize { getClassSize(false) };
    std::cout << "The class size is: " << classSize;

	constexpr int x{ 5 };
	// std::cout << (x != 5 ? x : "x is 5"); 
    // won't compile. One of the expressions is an integer, and the other is a string literal.
 
	return 0;
}
