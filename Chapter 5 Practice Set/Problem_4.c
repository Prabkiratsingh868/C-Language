// Write a program using recursion to calculate nth element of Fibonacci series

// Fibonacci Series = 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34

// fibonacci (n) = fibonacci (n-1) + fibonacci (n-2)

#include <stdio.h>

// Function Prototype
int fibonacci(int);

// Function Defination
int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 4;
    printf("the value of fibonacci series at %d is %d\n" , n , fibonacci(n));

    return 0;
}
