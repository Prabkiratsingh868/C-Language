// A function in C language which can call itself is called as recursion

// The function calling itself is called as recursive function

#include <stdio.h>

// Function Prototype
int factorial(int);

// Function Defination
int factorial(int n){
    // Factorial (5) = 1 X 2 X 3 X 4 X 5
    // Factorial (4) = 1 X 2 X 3 X 4
    // Factorial (n) = 1 X 2 X 3 X 4 X 5 X ... n-1 X n
    if(n==0 || n==1){  // Base Condition
        return 1; 
    }

    return factorial(n-1)*n; 
}

int main(){
    int n = 7;
    printf("the factorial of %d is %d\n" , n , factorial(n)); // Function Call

    return 0;
}