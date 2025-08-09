#include <stdio.h>

int main(){
    char st[20];

    // Gets is the function which is used to print the multi line strings
    gets(st); // The entire string is stored in st
    // printf("%s" , st);
    puts(st); // It prints the string and places the curser on next line
    // printf("%s" , st);
    printf("All is good\n");


    return 0;
}