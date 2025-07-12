// Write a program to print n natural number from 10 to 20 when intial loop counter as 0

#include <stdio.h>

int main(){
    int i = 0;
    while(i<=20){
        if(i>=10){
            printf("Value is %d\n" , i);
        }
        i++;
    }
}