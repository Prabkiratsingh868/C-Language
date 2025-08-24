// Quick Quiz: Write a program to create an array of size n using calloc where n is an integer entered by the user

// Calloc function stands for continous memory allocation

// It intialize each memory block with the default value of 0

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d" , &n);
    int* ptr;

    ptr = (int*) calloc (n, sizeof(int));
    ptr[0] = 10;

    printf("%d" , ptr[0]);
 
    return 0;
}