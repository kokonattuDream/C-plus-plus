
#include <iostream>
void runGame(){

}
void saveState(){

}
int main()
{
 
    try
    {
        runGame();
    }
    catch(...)
    {
        std::cerr << "Abnormal termination\n";
    }
 
    saveState(); // Save user's game
    return 1;
}