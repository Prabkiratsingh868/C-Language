// Function is a way to break our code into chunks to keep the track of code by the programmer

// Function is the block of code which performs the particular task

// Function is reused by the programmer in number of times

#include <stdio.h>

// Function Prototype
int sum(int , int);

// Function Defination
int sum(int a , int b){
    printf("the sum is %d\n", a+b);
}



int main(){
    int a = 10;
    int b = 2;
    // printf("the sum of a and b is %d\n" , a+b);
    sum(a,b); // Function Call

    int a1 = 8;
    int b1 = 4;
    // printf("the sum of a1 and b1 is %d\n" , a1+b1);
    sum(a1,b1); // Function Call

    // int a2 = 2;
    // int b2 = 4;
    // printf("the sum of a2 and b2 is %d\n" , a2+b2);
    sum(2,4); // Function Call

    // We can also write this to become our program short

    return 0;
}