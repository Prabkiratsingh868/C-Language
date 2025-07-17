// Write a program to check whether a given number is prime or not using loops

// Prime numbers is the  numbers which is divisible by 1 and itself

#include <stdio.h>

int main(){
    int n = 1;
    int prime = 0;
    if(n==0 || n==1){
        printf("%d is prime number" , n);
    }
    else{
    for(int i = 2; i<n; i++){
        if(n%i==0 && n!=2){
            prime = 1;
            break;
        }
        }
    
    if(prime){
        printf("%d is not prime number" , n);
    }

    else{
        printf("%d is prime number" , n);
    }
    }

    return 0;
}

