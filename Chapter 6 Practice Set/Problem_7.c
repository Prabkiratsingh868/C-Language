// Try problem 3 using call by value and verify that it does not change the value of the said variable

#include <stdio.h>

// Function prototype
int Change_the_value(int);

// Function Defination
int Change_the_value(int a){
    a = a * 10;
}

int main(){
    int a = 45;
    printf("The value of a is %d\n" , a);
    Change_the_value(a); // Function Call
    printf("The value of a is %d\n" , a);

    // Call by value function doesnot the change the value of a because the copy of a will passed to the function

    // Call by reference function changes the value of a because of address and it change the variable memory location by address

    return 0;
}
