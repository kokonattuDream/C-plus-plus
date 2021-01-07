void extract(){
    std::stringstream os;
    os << "12345 67.89" << '\n';
    cout << os.str();

    std::stringstream os;
    os << "12345 67.89"; // insert a string of numbers into the stream
    
    std::string strValue;
    os >> strValue;
    
    std::string strValue2;
    os >> strValue2;
    
    // print the numbers separated by a dash
    std::cout << strValue << " - " << strValue2 << '\n';
    //12345 - 67.89
}

void convertStringNumber(){
    std::stringstream os;
 
    int nValue{ 12345 };
    double dValue{ 67.89 };
    os << nValue << ' ' << dValue;
    
    std::string strValue1, strValue2;
    os >> strValue1 >> strValue2;
    
    std::cout << strValue1 << ' ' << strValue2 << '\n';
    //12345 67.89
}

void clear(){

    std::stringstream os;
    os << "Hello ";
    
    os.str(std::string{}); // erase the buffer
    os.clear(); // reset error flags
    
    os << "World!";
    cout << os.str();
    //World!
}