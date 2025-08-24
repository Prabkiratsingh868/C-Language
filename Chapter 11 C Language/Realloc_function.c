// Sometimes the dynamically allocated memory is insufficient or more than required

// Realloc function is used to allocate the memory of new size using previous pointer and size

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    scanf("%d" , &n);
    int* ptr;

    ptr = (int*) malloc(n* sizeof(int));
    ptr[0] = 10;
    printf("%d" , ptr[0]);

    ptr = (int*) realloc(ptr, 10* sizeof(int));

    return 0;
}