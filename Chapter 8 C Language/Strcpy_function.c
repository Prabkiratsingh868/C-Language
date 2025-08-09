// Strcpy is the standard library function for strings

#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "Prab";
    char target[10];

    strcpy(target , st); // target now contains prab
    printf("%s %s" , st , target);

    // strcpy function is used to copy the content of second string into first string passed to it


    return 0;
}