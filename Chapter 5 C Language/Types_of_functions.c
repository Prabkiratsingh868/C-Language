// Function is the way to break our code into chunks which is understandable by a programmer

// Types of Functions

// 1. Library Fuctions - Library function is the function which is in the library of c language like printf

// #include <stdio.h>

// int main(){
//     int a = 10;
//     printf("the value of a is %d\n" , a); // This is a library function
//     return 0;
// }

// 2. User Defined Function - User Defined functions are that function which is declared and defined by the user

#include <stdio.h>
// Function prototype

int sum(int , int);

//  Function Defination
int sum(int a , int b){
printf("the sum of a and b is %d\n" , a+b);
}
int main(){
    int a = 6;
    int b = 4;
    sum(a,b); // Function Call
    // This is User Defined Function
    return 0;
}