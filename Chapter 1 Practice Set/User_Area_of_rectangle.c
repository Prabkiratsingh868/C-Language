// Write a program to calculate the area of rectangle using input supplied by the user

// Area of rectangle is length*breath

#include <stdio.h>

int main(){
    int length;
    int breath;
    printf("Enter Length of rectangle\n");
    scanf("%d" , &length);
    printf("Enter breath of rectangle\n");
    scanf("%d" , &breath);
    printf("The area of rectangle is %d\n" , length*breath);

    return 0;
}