// Quick Quiz: Write a program to demonstrate the usage of free() with malloc()

// Free function is used to deallocate the memory

// The memory allocated using malloc/calloc is not deallocated automatically

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d" , &n);
    int* ptr;
    
    ptr = (int*) malloc (n* sizeof(int));
    ptr[0] = 10;
    free(ptr); // The memory of ptr is released

    printf("%d" , ptr[0]);


    return 0;
}