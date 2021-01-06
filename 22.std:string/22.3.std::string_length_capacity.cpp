
#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string sString1("Not Empty");
    std::cout << (sString1.empty() ? "true" : "false") << std::endl; //false
    std::string sString2; // empty
    std::cout << (sString2.empty() ? "true" : "false")  << std::endl; //true

    std::string sString("MyString");
    std::cout << sString.max_size() << std:: endl; // 4294967294


    std::string sString("0123456789abcde");
    std::cout << "Length: " << sString.length() << std::endl;
    //Length: 15
    std::cout << "Capacity: " << sString.capacity() << std::endl;
    //Capacity: 15
    
    // Now add a new character
    sString += "f";
    std::cout << "Length: " << sString.length() << std::endl;
    //Length: 16
    std::cout << "Capacity: " << sString.capacity() << std:: endl;
    //Capacity: 31

    sString.reserve(200);
    std::cout << "Length: " << sString.length() << std::endl;
    //Length: 16
    std:: cout << "Capacity: " << sString.capacity() << std::endl;
    //Capacity: 200
    
    return 0;
}