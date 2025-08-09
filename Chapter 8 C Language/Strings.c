// Strings is the collection of different characters

// A String is 1d character array terminated by null character (\0)

// A null character is used to denote the termination of the string

// Strings are stored in contiguous memory location

#include <stdio.h>

int main(){
    char st[] = {'P' , 'R' , 'A' , 'B' , '\0'}; // String
    // char st[] = "Prab"; 
    // printf("The value of character is %c\n" , st[0]);

    for(int i = 0; i<4; i++){
        printf("The value of character is %c\n" , st[i]);
    }


    return 0;
}