// Write a program to accept marks of five students in an array and print them on the screen

#include <stdio.h>

int main(){
    int marks[5]; // Reserve space to store 5 integers

    printf("Enter the marks of 5 students\n");
    
    // Accessing array elements

    // scanf("%d" , &marks[0]);
    // scanf("%d" , &marks[1]);
    // scanf("%d" , &marks[2]);
    // scanf("%d" , &marks[3]);
    // scanf("%d" , &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d" , &marks[i]);
    } 
    
    for (int i = 0; i < 5; i++)
    {
        printf("the value at index %d is %d\n" , i,  marks[i]);
    }
    // We can go upto till the way marks[4]
    

    // printf("The value of marks 0 and marks 1 is %d %d\n" , marks[0] , marks[1]);

    return 0;
}