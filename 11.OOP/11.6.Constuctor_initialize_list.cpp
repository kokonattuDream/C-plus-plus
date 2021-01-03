
class Something
{
private:
    int m_value1;
    double m_value2;
    char m_value3;
 
public:
    Something(int value1, double value2, char value3='c') // this line already has a lot of stuff on it
        : m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 } // so we can put everything indented on next line
    {
    }
 
};