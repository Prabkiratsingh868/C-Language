// Pointer is the variable which store the address of another variable

#include <stdio.h>

int main(){
    int i = 10;
    int* j = &i; // j is the pointer pointing to i (j store the address of i)
    int k = 10;


    printf("The address of i is %u\n" , &i);
    printf("The address of j is %u\n" , j);
    printf("The address of k is %u\n" , &k);

    // %u and %p is used to get the address of the variable
    
    // %u is for unsigned int

    // The value at Address or star (*) operator

    printf("The value at address i is %d\n" , *j);
    printf("The value at address i is %d\n" , *(&i));
    

    return 0;
}