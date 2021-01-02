
#include <iostream>
 
void fcn(char c, int x)
{
	std::cout << 'a';
}
 
void fcn(char c, double x)
{
	std::cout << 'b';
}
 
void fcn(char c, float x)
{
	std::cout << 'c';
}
 
int main()
{
	fcn('x', 4);
}