// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?

#include <stdio.h>

// Function Prototype
int function(int*);

// Function Defination
int function(int* ptr){
    printf("The value of i is %d\n" , ptr);
    printf("The value at ptr is %d\n", *ptr);
    
}

int main(){
    int i = 10;
    int* ptr = &i;
    
    printf("The address of i is %u\n" , &i);
    // Both the address are same because both have same address
    function(ptr);


    return 0;
}