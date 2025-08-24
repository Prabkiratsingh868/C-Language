// C is the language with some fixed rules of programming for example changing the size of an array is not allowed

// Dynamic memory allocation is the way to allocate the memory to the data structure during runtime

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d" , &n);
    // int arr[n]; // Not allowed in C

    // malloc function stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void

    ptr = (int*) malloc(n* sizeof(int));
    ptr[0] = 10;
    ptr[1] = 12;

    printf("%d" , ptr[0]);

    return 0;
}