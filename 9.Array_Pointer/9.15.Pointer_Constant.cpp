int main(){
    int value = 5;
    const int *ptr1 = &value; // ptr1 points to a "const int", so this is a pointer to a const value.
    int *const ptr2 = &value; // ptr2 points to an "int", so this is a const pointer to a non-const value.
    const int *const ptr3 = &value; // ptr3 points to a "const int", so this is a const pointer to a const value.



    const int valuex = 5;
    const int *ptr = &valuex; // this is okay, ptr is a non-const pointer that is pointing to a "const int"
    *ptr = 6; // not allowed, we can't change a const value

    const int valuez = 5; // value is const
    int *ptr = &valuez; // compile error: cannot convert const int* to int*
    *ptr = 6; // change value to 6


    const int *ptr = &value; // this is still okay

    const int *ptr0 = &value; // ptr points to a "const int"
    *ptr0 = 6; // ptr treats its value as const, so changing the value through ptr is not legal

    int value1 = 5;
    const int *ptr1 = &value1; // ptr points to a const int
    int value2 = 6;
    ptr1 = &value2; // okay, ptr now points at some other const int


    int * const ptr2 = &value1; // okay, the const pointer is initialized to the address of value1
    ptr2 = &value2; // not okay, once initialized, a const pointer can not be changed.

    int value = 5;
    int *const ptr3 = &value; // ptr will always point to value
    *ptr3 = 6; // allowed, since ptr points to a non-const int

    return 0;
}