// Call by value = Sending the values of the argument

#include <stdio.h>

// Function Prototype
int sum(int , int);

// Function Defination
int sum(int a , int b){
    a = 10; // This function never changes the value of a using this a
    return a+b;
}

int main(){
    int x = 6;
    int y = 4;
    // We can also write x and y integer name because the value of x and y is copy to function
    printf("The sum of 6 and 4 is %d\n" , sum(x,y)); // Function Call
    printf("The value of x is %d and the value of y is %d\n" , x , y);

    
    return 0;
}