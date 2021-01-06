#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string sString("one");
    sString += std::string(" two");
    std::string sThree(" three"); 
    sString.append(sThree); //one two three
    

    std::string sString0("one ");
    const std::string sTemp("twothreefour");
    sString0.append(sTemp, 3, 5); // append substring of sTemp starting at index 3 of length 5
    //one three

    std::string sString1("one ");
    sString1.append("threefour", 5); //one three

    std::string sString2("one");
    sString2 += ' ';
    sString2.push_back('2'); //one 2

    std::string sString3("aaa");
    sString3.append(4, 'b'); //aaabbbb

    return 0;


}