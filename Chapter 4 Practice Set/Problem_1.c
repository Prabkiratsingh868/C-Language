// Write a program to print multiplication table of a given number n

#include <stdio.h>

int main(){
    int n = 6;
    for(int i = 1; i<=10; i++){
        printf("%d X %d is %d\n" , n , i , n*i);
    }

    return 0;
}