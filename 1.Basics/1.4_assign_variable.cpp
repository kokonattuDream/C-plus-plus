#include <iostream>
 
int main()
{
	int width;
	width = 5; // copy assignment of value 5 into variable width
 
	// variable width now has value 5
 
	width = 7; // change value stored in variable width to 7
 
	// variable width now has value 7

    int len = 5; // copy initialization of value 5 into variable len
    int bo( 5 ); // direct initialization of value 5 into variable bo
    int al{ 5 }; // direct list initialization of value 5 into variable al (preferred)
    int bl = { 6 }; // copy list initialization of value 6 into variable bl
    int zo{}; // value initialization to value 0

    int a = 5, b = 6; // copy initialization
    int c( 7 ), d( 8 ); // direct initialization
    int e{ 9 }, f{ 10 }; // list initialization (preferred) 

    int a1 = 5, b1 = 5; // correct
 
	return 0;
}
