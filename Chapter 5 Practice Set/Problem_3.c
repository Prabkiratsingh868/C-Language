// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth Consider g = 9.8m/s2

// Force of attraction = f = m*g

#include <stdio.h>

// Function Prototype
float force(float);

// Function Defination
float force(float m){
    return m*9.8;
}

int main(){
    int m = 45;
    printf("the force of attraction is %f\n" , force(m)); 

/* 
    %f for float
    \n for new line
    force(m) for function call
*/

    return 0;
}