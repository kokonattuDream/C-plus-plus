#include <iostream>
#include <string>

int main()
{
    char strBuf[11];
    // Read up to 10 characters
    std::cin.get(strBuf, 11);
    std::cout << strBuf << '\n';
 
    // Read up to 10 more characters
    std::cin.get(strBuf, 11);
    std::cout << strBuf << '\n';
    return 0;
}


int lastCall()
{
    char strBuf[100];
    std::cin.getline(strBuf, 100);
    std::cout << strBuf << '\n';
    std::cout << std::cin.gcount() << " characters were read" << std::endl;
 
    return 0;
}

int readToString()
{
    std::string strBuf;
    std::getline(std::cin, strBuf);
    std::cout << strBuf << '\n';
 
    return 0;
}