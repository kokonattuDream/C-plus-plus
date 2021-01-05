
#include <iostream>
#include <string>
#include <utility> // for std::move
#include <vector>

template<class T>
void myswap(T& a, T& b) 
{ 
  T tmp { std::move(a) }; // invokes move constructor
  a = std::move(b); // invokes move assignment
  b = std::move(tmp); // invokes move assignment
}
 
int example1()
{
	std::string x{ "abc" };
	std::string y{ "de" };
 
	std::cout << "x: " << x << '\n';
    //x: abc
	std::cout << "y: " << y << '\n';
    //y: de
	myswap(x, y);
 
	std::cout << "x: " << x << '\n';
    //x: de
	std::cout << "y: " << y << '\n';
    //y: abc
	return 0;
}

int example2()
{
	std::vector<std::string> v;
	std::string str = "Knock";
 
	std::cout << "Copying str\n";
	v.push_back(str); // calls l-value version of push_back, which copies str into the array element
	
	std::cout << "str: " << str << '\n'; //str: Knock
	std::cout << "vector: " << v[0] << '\n'; //vector: Knock
 
	std::cout << "\nMoving str\n";
 
	v.push_back(std::move(str)); // calls r-value version of push_back, which moves str into the array element
	
	std::cout << "str: " << str << '\n'; //str:
	std::cout << "vector:" << v[0] << ' ' << v[1] << '\n'; //vector: Knock Knock
 
	return 0;
}