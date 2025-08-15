// Write a program to check whether a given character is present in a string or not

#include <stdio.h>
#include <string.h>

int main(){
    int contains = 0;
    char c = 'a';
    char str[] = "Prabkirat";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            contains = 1;
            break;
        }
    }
    if(contains){
        printf("This character is present in the string");
    }    
    else{
        printf("This character doesnot present in the string");
    }


    return 0;
}