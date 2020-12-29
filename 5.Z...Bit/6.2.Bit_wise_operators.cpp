/**
Operator  Symbol Form	Operation
left shift	<<	x << y	all bits in x shifted left y bits
right shift	>>	x >> y	all bits in x shifted right y bits
bitwise NOT	~	~x	all bits in x flipped
bitwise AND	&	x & y	each bit in x AND each bit in y
bitwise OR	|	x | y	each bit in x OR each bit in y
bitwise XOR	^	x ^ y	each bit in x XOR each bit in y

 */
/**
0011 << 1 is 0110
0011 << 2 is 1100
0011 << 3 is 1000
1100 >> 1 is 0110
1100 >> 2 is 0011
1100 >> 3 is 0001
*/

#include <bitset>
#include <iostream>
 
int main()
{
    std::bitset<4> x { 0b1100 };
 
    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000

    std::cout << x << 1 << '\n'; // print value of x (0110), then 1
	std::cout << (x << 1) << '\n'; // print x left shifted by 1 (1100)

    std::cout << std::bitset<4>{ ~0b0100u } << ' ' << std::bitset<8>{ ~0b0100u };
    //This prints: 1011 11111011
    
    std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 });
    //This prints:0111
    std::cout << (std::bitset<4>{ 0b0111 } | std::bitset<4>{ 0b0011 } | std::bitset<4>{ 0b0001 });
    //This prints:0111
    std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 });
    //This prints:0100
    std::cout << (std::bitset<4>{ 0b0001 } & std::bitset<4>{ 0b0011 } & std::bitset<4>{ 0b0111 });
    //This prints:0001
    
    return 0;
}
