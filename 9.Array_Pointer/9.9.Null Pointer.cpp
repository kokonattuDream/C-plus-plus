#include <cstddef> // for NULL


#include <iostream>
#include <cstddef> // for NULL
 
void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}
 
void print(int *x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}
 
int main()
{
    float *ptr { 0 };  // ptr is now a null pointer
    float *ptr2; // ptr2 is uninitialized
    ptr2 = 0; // ptr2 is now a null pointer


    // pointers convert to boolean false if they are null, and boolean true if they are non-null
    if(ptr)
        std::cout << "ptr is pointing to a double value.";
    else
        std::cout << "ptr is a null pointer.";


	int *x { NULL };
	print(x); // calls print(int*) because x has type int*
	print(0); // calls print(int) because 0 is an integer literal
	print(NULL); // likely calls print(int), although we probably wanted print(int*)
    print(nullptr); // calls print(int*) as desired
	return 0;
}