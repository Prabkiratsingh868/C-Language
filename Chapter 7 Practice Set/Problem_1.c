// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array

// Answer: Yes (ptr+2) points to the third element

#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10}; // Array elements
    // int* ptr = &array[0];
    int* ptr = array; // We can also write this instead of int* ptr = &array[0];

    printf("The value at address %u is %d\n", ptr+2 , *(ptr+2));


    return 0;
}