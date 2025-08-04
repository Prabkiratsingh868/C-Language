// Write a program to change the value of a variable to ten times of its current value

#include <stdio.h>

// Function Prototype
int Change_the_value(int*);

// Function Defination
int Change_the_value(int* a){
    *a = *a * 10; // This Changes the value of a to its ten times
}

int main(){
    int a = 45;
    printf("The value of a is %d\n" , a);
    Change_the_value(&a); // Function Call
    printf("The value of a is %d\n" , a);


    return 0;
}