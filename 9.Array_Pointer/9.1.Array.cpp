
#include <iostream>
 
int main()
{
    double batteryLifeInHours[3]{}; // allocate 3 doubles
    batteryLifeInHours[0] = 2.0;
    batteryLifeInHours[1] = 3.0;
    batteryLifeInHours[2] = 4.3;
 
    std::cout << "The average battery life is " << (batteryLifeInHours[0] + batteryLifeInHours[1] + batteryLifeInHours[2]) / 3.0 << "hour(s)\n";
 
    // Initialize all elements to 0
    int array[5]{ };
    // uninitialized
    int array[5];
    // uninitialized
    double array[5];
    // Initialize all elements to an empty string
    std::string array[5];   
    int array[5]{ 0, 1, 2, 3, 4 }; // explicitly define the length of the array
    int array[]{ 0, 1, 2, 3, 4 }; // let the initializer list set length of the array


    return 0;
}