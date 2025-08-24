// Solve problem 1 using calloc()

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 6;
    int* ptr;

    ptr = (int*) calloc(n, sizeof(int));
    ptr[0] = 6;

    printf("%d" , ptr[0]);
    

    return 0;
}