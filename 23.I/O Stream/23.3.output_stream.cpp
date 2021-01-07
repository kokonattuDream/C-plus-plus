#include <iostream>

void dec_oct_hexa(){
    std::cout << 27 << '\n';
    //27
    std::cout.setf(std::ios::dec, std::ios::basefield);
    std::cout << 27 << '\n';
    //27
    std::cout.setf(std::ios::oct, std::ios::basefield);
    std::cout << 27 << '\n';
    //33
    std::cout.setf(std::ios::hex, std::ios::basefield);
    std::cout << 27 << '\n';
    //1b
    std::cout << std::dec << 27 << '\n';
    //27
    std::cout << std::oct << 27 << '\n';
    //33
    std::cout << std::hex << 27 << '\n';
    //1b
}
void setPrecision(){
    std::cout << std::showpoint << '\n';
    std::cout << std::setprecision(3) << 123.456 << '\n';
    //123.
    std::cout << std::setprecision(4) << 123.456 << '\n';
    //123.5
    std::cout << std::setprecision(5) << 123.456 << '\n';
    //123.46
    std::cout << std::setprecision(6) << 123.456 << '\n';
    //123.456
    std::cout << std::setprecision(7) << 123.456 << '\n';
    //123.4560
}
void fill(){
    std::cout.fill('*');
    std::cout << -12345 << '\n'; // print default value with no field width
    //-12345
    std::cout << std::setw(10) << -12345 << '\n'; // print default with field width
    //****-12345
    std::cout << std::setw(10) << left << -12345 << '\n'; // print left justified
    //-12345****
    std::cout << std::setw(10) << right << -12345 << '\n'; // print right justified
    //****-12345
    std::cout << std::setw(10) << internal << -12345 << '\n'; // print internally justified
    //-****12345
}