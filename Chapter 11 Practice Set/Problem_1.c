// Write a program to dynamically create an array of size 6 capable of storing 6 integers

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int* ptr;

    ptr = (int*) malloc(n* sizeof(int));
    ptr[0] = 6;

    printf("%d" , ptr[0]);
    

    return 0;
}