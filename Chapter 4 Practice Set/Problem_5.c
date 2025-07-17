// Write a program to sum first ten n natural numbers using while loop

#include <stdio.h>

int main(){
    int sum = 0;
    int i = 1;
    while(i<=10){ // condition
        sum += i; // sum = sum + i 
        // += is compound assignment operator
        i++;
    }
    printf("the sum of first n natural numbers is %d\n" , sum);

    return 0;
}

