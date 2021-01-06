
#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string sSource{ "abcdefg" };
    std::cout << sSource[5] << '\n'; //f
    sSource[5] = 'X';//abcdeXg
    std::cout << sSource.at(5) << '\n'; //f
    sSource.at(5) = 'F';//abcdeFg

    //Conversion to C-style arrays
    std::string sSource{ "abcdefg" };
    std::cout << std::strlen(sSource.c_str()); //7

    std::string sSource{ "abcdefg" };
    const char *szString{ "abcdefg" };
    // memcmp compares the first n characters of two C-style strings and returns 0 if they are equal
    if (std::memcmp(sSource.data(), szString, sSource.length()) == 0)
        std::cout << "The strings are equal";
    else
        std::cout << "The strings are not equal";


    std::string sSource{ "sphinx of black quartz, judge my vow" };
    char szBuf[20];
    int nLength{ static_cast<int>(sSource.copy(szBuf, 5, 10)) }; //length, index
    szBuf[nLength] = '\0';  // Make sure we terminate the string in the buffer
    
    std::cout << szBuf << '\n'; //black

    return 0;
}