
#include <iostream>
#include <sstream>
#include <string>
 
int string(){
    std::string sSource{ "my string" };
    std::cout << sSource; //my string
    std::string sOutput0(sSource, 4);
    std::cout << sOutput0 << '\n'; //my s
    std::string sOutput{ sSource, 3 };
    std::cout << sOutput<< '\n'; //string
    std::string sOutput2(sSource, 3, 4); //startIndex, length
    std::cout << sOutput2 << '\n'; //stri

    std::string sOutput3(4, 'Q');
    std::cout << sOutput3 << std::endl; //QQQQ
    return 0;
}

template <typename T>
inline bool FromString(const std::string& sString, T &tX)
{
    std::istringstream iStream(sString);
    return !(iStream >> tX).fail(); // extract value into tX, return success or not
}
int StringToNum()
{
    double dX;
    if (FromString("3.4", dX))
        std::cout << dX << '\n'; 
    if (FromString("ABC", dX))
        std::cout << dX << '\n'; 
}