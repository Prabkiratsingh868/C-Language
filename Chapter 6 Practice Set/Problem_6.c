// Write a program to print the value of a variable i by using “pointer to pointer” type of variable

#include <stdio.h>

int main(){
    int i = 10;
    int*j = &i; // j is a pointer which store the address of i
    int**k = &j; // Pointer to pointer type of variable

    
    printf("The address of i is %d\n" , &i);
    printf("The value of i is %d\n" , *j);
    printf("The value of k is %d\n" , **k);


    return 0;
}