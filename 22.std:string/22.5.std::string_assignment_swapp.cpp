
#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string sString;
    // Assign a string value
    sString = std::string("One");
    const std:: string sTwo("Two");
    sString.assign(sTwo);
    // Assign a C-style string
    sString = "Three";
    sString.assign("Four");
    // Assign a char
    sString = '5';
    // Chain assignment
    std::string sOther;
    sString = sOther = "Six";



    const std::string sSource("abcdefg");
    std::string sDest;
    sDest.assign(sSource, 2, 4); // assign a substring of source from index 2 of length 4

    std::string sDest;
    sDest.assign("abcdefg", 4); //abcd

    std::string sDest1;
    sDest1.assign(4, 'g'); //gggg



    std::string sStr1("red");
    std::string sStr2("blue");
 
    swap(sStr1, sStr2);
    sStr1.swap(sStr2);
    return 0;
}