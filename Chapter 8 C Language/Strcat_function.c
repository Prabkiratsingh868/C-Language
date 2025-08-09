// Strcat is the standard library function for strings

#include <stdio.h>
#include <string.h>

int main(){
    // Strcat function is used to concatenate two strings
    char s1[] = "Hello";
    char s2[] = "Prab";
    strcat(s1,s2); // s1 now contains HelloWorld <no space in between>
    printf("%s" , s1);
    
    return 0;
}