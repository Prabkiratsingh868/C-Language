// Write a program to find greatest of four numbers entered by the user

#include <stdio.h>

int main(){
    int a , b , c , d;
    printf("Enter the value of a\n");
    scanf("%d" , &a); // This is for user input 
    printf("Enter the value of b\n");
    scanf("%d" , &b); 
    printf("Enter the value of c\n");
    scanf("%d" , &c); 
    printf("Enter the value of d\n");
    scanf("%d" , &d); 
    if(a>b && a>c && a>d){ // && is logical operator
        printf("a is greater ");
    }
    else if(b>a && b>c && b>d){ // AND OPERATOR
        printf("b is greater");
    }
    else if(c>a && c>b && c>d){
        printf("c is greater");
    }

    else{
        printf("d is greater");
    }
    return 0;
}