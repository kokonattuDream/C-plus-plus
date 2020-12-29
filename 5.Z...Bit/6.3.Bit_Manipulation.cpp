#include <cstdint>
#include <iostream>
 
int main()
{
	constexpr std::uint_fast8_t mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::uint_fast8_t mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::uint_fast8_t mask2{ 0b0000'0100 }; // represents bit 2 
	constexpr std::uint_fast8_t mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::uint_fast8_t mask4{ 0b0001'0000 }; // represents bit 4
	constexpr std::uint_fast8_t mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::uint_fast8_t mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::uint_fast8_t mask7{ 0b1000'0000 }; // represents bit 7
 
	std::uint_fast8_t flags{ 0b0000'0101 }; // 8 bits in size means room for 8 flags
   
    //Testing a bit
	std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
    //bit 0 is on
	std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
    //bit 1 is off

    //Setting a bit
    flags |= mask1; // turn on bit 1
    flags |= (mask4 | mask5); // turn bits 4 and 5 on at the same time

    //Resetting a bit
    flags &= ~mask2; // turn off bit 2
    flags &= ~(mask4 | mask5); // turn bits 4 and 5 off at the same time
    
    //Flipping a bit
    flags ^= mask2; // flip bit 2

    constexpr std::bitset<8> mask0{ 0b0000'0001 }; // represents bit 0
	constexpr std::bitset<8> mask1{ 0b0000'0010 }; // represents bit 1
	constexpr std::bitset<8> mask2{ 0b0000'0100 }; // represents bit 2 
	constexpr std::bitset<8> mask3{ 0b0000'1000 }; // represents bit 3
	constexpr std::bitset<8> mask4{ 0b0001'0000 }; // represents bit 4
	constexpr std::bitset<8> mask5{ 0b0010'0000 }; // represents bit 5
	constexpr std::bitset<8> mask6{ 0b0100'0000 }; // represents bit 6
	constexpr std::bitset<8> mask7{ 0b1000'0000 }; // represents bit 7
 
	std::bitset<8> flag{ 0b0000'0101 }; // 8 bits in size means room for 8 flags
 
	std::cout << "bit 1 is " << (flag.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flag.test(2) ? "on\n" : "off\n");
	flag ^= (mask1 | mask2); // flip bits 1 and 2
 
	std::cout << "bit 1 is " << (flag.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flag.test(2) ? "on\n" : "off\n");
	flag |= (mask1 | mask2); // turn bits 1 and 2 on
 
	std::cout << "bit 1 is " << (flag.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flag.test(2) ? "on\n" : "off\n");
	flag &= ~(mask1 | mask2); // turn bits 1 and 2 off
 
	std::cout << "bit 1 is " << (flag.test(1) ? "on\n" : "off\n");
	std::cout << "bit 2 is " << (flag.test(2) ? "on\n" : "off\n");
 
    
    //Bit mask involving multiple bits
    constexpr std::uint_fast32_t redBits{ 0xFF000000 };
	constexpr std::uint_fast32_t greenBits{ 0x00FF0000 };
	constexpr std::uint_fast32_t blueBits{ 0x0000FF00 };
	constexpr std::uint_fast32_t alphaBits{ 0x000000FF };
 
	std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	std::uint_fast32_t pixel{};
	std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value
 
	// use Bitwise AND to isolate red pixels,
	// then right shift the value into the lower 8 bits
	std::uint_fast8_t red{ static_cast<std::uint_fast8_t>((pixel & redBits) >> 24) };
	std::uint_fast8_t green{ static_cast<std::uint_fast8_t>((pixel & greenBits) >> 16) };
	std::uint_fast8_t blue{ static_cast<std::uint_fast8_t>((pixel & blueBits) >> 8) };
	std::uint_fast8_t alpha{ static_cast<std::uint_fast8_t>(pixel & alphaBits) };
 
	std::cout << "Your color contains:\n";
	std::cout << std::hex; // print the following values in hex
	std::cout << static_cast<int>(red) << " red\n";
	std::cout << static_cast<int>(green) << " green\n";
	std::cout << static_cast<int>(blue) << " blue\n";
	std::cout << static_cast<int>(alpha) << " alpha\n";
	return 0;
}