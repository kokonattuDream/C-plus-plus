#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <string>

int vector()
{
    std::vector<int> vect;
    for (int count=0; count < 6; ++count)
        vect.push_back(count);
 
    std::vector<int>::const_iterator it; // declare a read-only iterator
    it = vect.cbegin(); // assign it to the start of the vector
    while (it != vect.cend()) // while it hasn't reach the end
        {
        std::cout << *it << " "; // print the value of the element it points to
        ++it; // and iterate to the next element
        }
 
    std::cout << '\n';
}

int list()
{
 
    std::list<int> li;
    for (int count=0; count < 6; ++count)
        li.push_back(count);
 
    std::list<int>::const_iterator it; // declare an iterator
    it = li.cbegin(); // assign it to the start of the list
    while (it != li.cend()) // while it hasn't reach the end
    {
        std::cout << *it << " "; // print the value of the element it points to
        ++it; // and iterate to the next element
    }
 
    std::cout << '\n';
}
int set()
{
    std::set<int> myset;
    myset.insert(7);
    myset.insert(2);
    myset.insert(-6);
    myset.insert(8);
    myset.insert(1);
    myset.insert(-4);
 
    std::set<int>::const_iterator it; // declare an iterator
    it = myset.cbegin(); // assign it to the start of the set
    while (it != myset.cend()) // while it hasn't reach the end
    {
        std::cout << *it << " "; // print the value of the element it points to
        ++it; // and iterate to the next element
    }
 
    std::cout << '\n';
}

int map()
{
	std::map<int, std::string> mymap;
	mymap.insert(std::make_pair(4, "apple"));
	mymap.insert(std::make_pair(2, "orange"));
	mymap.insert(std::make_pair(1, "banana"));
	mymap.insert(std::make_pair(3, "grapes"));
	mymap.insert(std::make_pair(6, "mango"));
	mymap.insert(std::make_pair(5, "peach"));
 
	auto it{ mymap.cbegin() }; // declare a const iterator and assign to start of vector
	while (it != mymap.cend()) // while it hasn't reach the end
	{
		std::cout << it->first << "=" << it->second << " "; // print the value of the element it points to
		++it; // and iterate to the next element
	}
 
	std::cout << '\n';
}