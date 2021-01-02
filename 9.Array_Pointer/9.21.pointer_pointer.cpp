#include <iostream>
int main(){
    int *ptr; // pointer to an int, one asterisk
    int **ptrptr; // pointer to a pointer to an int, two asterisks

    int value = 5;
    
    int *ptr = &value;
    std::cout << *ptr; // Indirection through pointer to int to get int value
    //5
    int **ptrptr = &ptr;
    std::cout << **ptrptr; // first indirection to get pointer to int, second indirection to get int value
    //5

    int **ptrptr = &&value; // not valid
    int **ptrptr = nullptr; // use 0 instead prior to C++11

    int **array = new int*[10]; // allocate an array of 10 int pointers


    //Dynamically allocating a two-dimensional array
    int **array = new int[10][5]; // won’t work!
    int (*array)[5] = new int[10][5];
    auto array = new int[10][5]; // so much simpler!


    //this relatively simple solution doesn’t work if any non-leftmost array dimension isn’t a compile-time constant.
    int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
    for (int count = 0; count < 10; ++count)
        array[count] = new int[5]; // these are our columns

    array[9][4] = 3; // This is the same as (array[9])[4] = 3;



    //it’s possible to make dynamically allocated two dimensional arrays that are not rectangular
    int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
    for (int count = 0; count < 10; ++count)
        array[count] = new int[count+1]; // these are our columns

    for (int count = 0; count < 10; ++count)
        delete[] array[count];
    delete[] array; // this needs to be done last


    // Instead of 5 x 10 array, Do this
    int *array = new int[50]; // a 10x5 array flattened into a single array
    return 0;
}