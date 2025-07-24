// Write a function to convert Celsius temperature into Fahrenheit

// formula of celcius to fahrenheit = (9/5*c) + 32

#include <stdio.h>

// Function Prototype
float fahrenheit(float);

// Function Defination
float fahrenheit(float c){
    return (9.0/5.0*c)+32.0;
}

int main(){
    int c = 45;
    printf("the value of celcius to fahrenheit is %.2f\n" , fahrenheit(c));

    return 0;
}