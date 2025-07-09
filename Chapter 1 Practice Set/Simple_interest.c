// Write a program to calculate simple interest for a set of Values representing principal no of years and rate of interest

// The formula of simple interest is p*r*t/100

// p for price , r for rate of interest , t for time

#include <stdio.h>

int main(){
    float p = 10.0;
    int r = 10;
    int t = 2;
    printf("the value of simple interest is %f" , (p*r*t)/100);

    return 0;

}