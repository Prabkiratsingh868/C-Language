// Write a program using function to find average of three numbers

// Average of three number = (a + b + c) / 3

#include <stdio.h>

// Function Prototype
int average(int a , int b, int c);

// Function Defination
int average(int a , int b , int c){
    return (a+b+c)/3;     

}

int main(){
    int a = 30, b = 30, c = 30;
    printf("the average of three number is %d\n" , average(a,b,c)); // Function Call
    
    return 0;
}
