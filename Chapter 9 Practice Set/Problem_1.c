// Create a two-dimensional vector using structures in C

#include <stdio.h>

struct vector{ // vector include i cap and j cap
    int i;
    int j;
}; // Semicolon is important

int main(){
    struct vector v = {1,2};
    printf("The value of vector is %di + %dj" , v.i, v.j);


    return 0;
}