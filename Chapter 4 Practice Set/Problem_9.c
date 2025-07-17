// Repeat 8 using while loop
// Write the program to calculate the factorial of n number using while loop

#include <stdio.h>

int main(){
    int product = 1;
    int n = 5;
    int i = 1;
    while(i<=n){ // condition
        product *= i; // product = product * i
        i++;
    }
    printf("the factorial of %d is %d\n" , n , product);

    return 0;
}