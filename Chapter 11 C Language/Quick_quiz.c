// Write a program to create a dynamic array of 5 floats using malloc()

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;

    ptr = (float*) malloc (n* sizeof(float));
    ptr[0] = 10.0;
    ptr[1] = 20.0;
    ptr[2] = 30.0;
    ptr[3] = 40.0;
    ptr[4] = 50.0;

    printf("%f\n" , ptr[0]);
    printf("%f\n" , ptr[1]);
    printf("%f\n" , ptr[2]);
    printf("%f\n" , ptr[3]);
    printf("%f\n" , ptr[4]);

    return 0;
}