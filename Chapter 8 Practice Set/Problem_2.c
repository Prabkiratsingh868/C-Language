// Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.

#include <stdio.h>

int main(){
    char str[4];
    // printf("%s" , str);
    for (int i = 0; i < 4; i++)
    {
        scanf("%c" , &str[i]);
        fflush(stdin); // It is for not taking the null value when enter key is pressed  
    }
    str[4] = '\0';
    printf("%s" , str);
    

    return 0;
}