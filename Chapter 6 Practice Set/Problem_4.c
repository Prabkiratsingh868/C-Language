// Write a function and pass the value by reference

#include <stdio.h>

// Function Prototype
int sum(int* , int*);

// Function Defination
int sum(int* a , int* b){
    *a = 10;
    return *a + *b;
}

int main(){
    int a = 6;
    int b = 4;

    printf("The sum of a and b is %d\n" , sum(&a,&b));
    printf("The value of a is %d\n" , a);
    

    return 0;
}