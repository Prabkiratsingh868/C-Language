// Write a recursive function to calculate the sum of first ‘n’ natural numbers

#include <stdio.h>

// Function Prototype
int sum_natural(int);

// Function Defination
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    // Sum natural (n) = 1 + 2 + 3 + 4 + 5 ... n-1 + n
    // Sum natural (n) = sum (n-1) + n
    return sum_natural(n-1) + n; 
}

int main(){
    int n = 5;
    printf("the sum of first n natural number is %d\n" , sum_natural(n));

    return 0;
}