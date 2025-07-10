// Write a program to determine whether a character entered by the user is lowercase or not

#include <stdio.h>

int main(){
    char a = 'c';
    printf("The value of a is %c\n" , a);
    // Character of Lowercase starts from 97 122
    if(a>=97 && a<=122){
        printf("This Character is lowercase");
    }

    else{
        printf("This Character is not lowercase");
    }


    return 0;

}