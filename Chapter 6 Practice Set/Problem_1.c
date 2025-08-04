// Write a program to print the address of a variable. Use this address to get the value of the variable

#include <stdio.h>

int main(){
    int i = 10;
    int* j = &i; // j is the pointer pointing to i
    
    printf("The value of i is %u\n" , &i);
    printf("The value at address i is %d\n" , *j);

    return 0;
}