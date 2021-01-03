#include <iostream>
#include <string>
 
class Person
{
private:
    std::string m_name;
    int m_age;
 
public:
    Person(const std::string& name = "", int age = 0)
        : m_name{ name }, m_age{ age }
    {
    }
 
    const std::string& getName() const { return m_name; }
    int getAge() const { return m_age; }
 
};
// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person
{
private:
    double m_battingAverage;
    int m_homeRuns;
 
public:
    BaseballPlayer(const std::string& name = "", int age = 0,
        double battingAverage = 0.0, int homeRuns = 0)
        : Person{ name, age }, // call Person(const std::string&, int) to initialize these fields
            m_battingAverage{ battingAverage }, m_homeRuns{ homeRuns }
    {
    }
 
    double getBattingAverage() const { return m_battingAverage; }
    int getHomeRuns() const { return m_homeRuns; }
};

int main()
{
    BaseballPlayer pedro{ "Pedro Cerrano", 32, 0.342, 42 };
 
    std::cout << pedro.getName() << '\n'; //Pedro Cerrano
    std::cout << pedro.getAge() << '\n'; //32
    std::cout << pedro.getHomeRuns() << '\n';//42
 
    return 0;
}
