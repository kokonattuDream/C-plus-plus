
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
#include <iostream>
 
void printCats(bool skip)
{
    if (skip)
        goto end; // jump forward; statement label 'end' is visible here due to it having function scope
    
    std::cout << "cats";
end:
    ; // statement labels must be associated with a statement
}
 
int main()
{
    printCats(true);  // jumps over the print statement and doesn't print anything
    printCats(false); // prints "cats"
 
    return 0;
}