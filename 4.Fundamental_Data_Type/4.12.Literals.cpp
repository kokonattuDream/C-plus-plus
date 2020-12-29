#include <iostream>
 
int main()
{

	unsigned int value1 { 5u }; // 5 has type unsigned int
    long value2 { 6L }; // 6 has type long

    float f { 5.0f }; // 5.0 has type float
    float f1 { 4.1 }; // warning: 4.1 is a double literal, not a float literal

    double pi { 3.14159 }; // 3.14159 is a double literal in standard notation
    double avogadro { 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation
    double electron { 1.6e-19 }; // charge on an electron is 1.6 x 10^-19


    //Decimal	0	1	2	3	4	5	6	7	8	9	10	11
    //Octal	    0	1	2	3	4	5	6	7	10	11	12	13
    int x{ 012 }; // 0 before the number means this is octal
    std::cout << x;

    //Decimal	0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17
//Hexadecimal	0	1	2	3	4	5	6	7	8	9	A	B	C	D	E	F	10	11

    int y{ 0xF }; // 0x before the number means this is hexadecimal
    std::cout << y;


    int bin{};
    bin = 0x01; // assign binary 0000 0001 to the variable
    bin = 0x02; // assign binary 0000 0010 to the variable
    bin = 0x04; // assign binary 0000 0100 to the variable
    bin = 0x08; // assign binary 0000 1000 to the variable
    bin = 0x10; // assign binary 0001 0000 to the variable
    bin = 0x20; // assign binary 0010 0000 to the variable
    bin = 0x40; // assign binary 0100 0000 to the variable
    bin = 0x80; // assign binary 1000 0000 to the variable
    bin = 0xFF; // assign binary 1111 1111 to the variable
    bin = 0xB3; // assign binary 1011 0011 to the variable
    bin = 0xF770; // assign binary 1111 0111 0111 0000 to the variable

    bin = 0b1;  // assign binary 0000 0001 to the variable
    bin = 0b11; // assign binary 0000 0011 to the variable
    bin = 0b1010; // assign binary 0000 1010 to the variable
    bin = 0b11110000; // assign binary 1111 0000 to the variable

    int bin0{ 0b1011'0010 };  // assign binary 1011 0010 to the variable
    long value{ 2'132'673'462 }; // much easier to read than 2132673462

    int z { 12 };
    std::cout << z << '\n'; // decimal (by default)
    std::cout << std::hex << z << '\n'; // hexadecimal
    std::cout << z << '\n'; // now hexadecimal
    std::cout << std::oct << z << '\n'; // octal
    std::cout << std::dec << z << '\n'; // return to decimal
    std::cout << z << '\n'; // decimal

    // std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101
 
	std::cout << bin1 << ' ' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // we can also print from std::bitset directly


    return 0;
}