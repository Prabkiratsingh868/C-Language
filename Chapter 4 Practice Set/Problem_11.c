// Implement 10 using other types of loops
// Write a program to check the number is prime or not

#include <stdio.h>

int main(){
    // Using While Loop
    int n = 13;
    int prime = 0;
    int i = 2;
    if(n==0 || n==1){
        printf("%d is prime number" , n);
    }
    else{
    // while(i<n){
    //     if(n%i==0 && n!=2){
    //         prime = 1;
    //         break;
    //     }
    //     i++;
    // }

    // Using Do While Loop 
    do{
        if(n%i==0 && n%i!=2){
            prime = 1;
            break; // break statement
        }

        i++; // incrementing operator
    }while(i<n); // condition
    if(prime){
        printf("%d is not prime number" , n);
    }
    else{
        printf("%d is prime number" , n);
    }
    }


    return 0;
}