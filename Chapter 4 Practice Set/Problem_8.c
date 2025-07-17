// Write a program to calculate the factorial of a given number using a for loop

// Factorial (8) = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
// Factorial (4) = 1 X 2 X 3 X 4
// Factorial (3) = 1 X 2 X 3

#include <stdio.h>

int main(){
    int product = 1;
    int n = 6;
    for(int i = 1; i<=n; i++){
        product*= i; // product = product * i
    }

    printf("the factorial of %d is %d\n" , n , product);
    
    return 0;
}