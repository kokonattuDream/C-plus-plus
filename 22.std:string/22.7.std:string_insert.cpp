
#include <iostream>
#include <sstream>
#include <string>

int main(){

    std::string sString("aaaa"); //aaaa
    sString.insert(2, std::string("bbbb")); //aabbbbaa
    sString.insert(4, "cccc"); //aabbccccbbaa
    return 0;

    std::string sString1("aaaa");
    const std::string sInsert("01234567");
    sString1.insert(2, sInsert, 3, 4); // insert substring of sInsert from index [3,7) into sString at index 2
    //aa3456aa

    std::string sString("aaaa");
    sString.insert(2, "bcdef", 3); //aabcdaa

    std::string sString("aaaa");
    sString.insert(2, 4, 'c'); //aaccccaa
}
