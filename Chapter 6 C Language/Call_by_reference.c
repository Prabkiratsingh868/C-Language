// Call by reference = Sending the address of the argument

#include <stdio.h>

// Function Prototype
int sum(int* , int*);

// Function Defination
int sum(int* a , int* b){
    *a = 10; // This function changes the value of a using the address of a
    return *a + *b;
}

int main(){
    int a = 6;
    int b = 4;
    printf("The sum of 6 and 4 is %d\n" , sum(&a,&b)); // Function Call
    printf("The value of a is %d and the value of b is %d\n" , a , b);
 

    return 0;
}