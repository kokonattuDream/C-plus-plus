/*

Type Minimum Size	Note
short 16 bits	
int	16 bits	Typically 32 bits on modern architectures
long 32 bits	
long long	64 bits	

Size/Type	Range
8 bit signed	-128 to 127
16 bit signed	-32,768 to 32,767
32 bit signed	-2,147,483,648 to 2,147,483,647
64 bit signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

*/
#include <iostream>
 
int main()
{
    short s;
    int i;
    long l;
    long long ll;
    short int si;
    long int li;
    long long int lli;
    signed short ss;
    signed int si;
    signed long sl;
    signed long long sll;

    std::cout << 20 / 4;
    return 0;
}