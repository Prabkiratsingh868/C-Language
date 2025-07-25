/* 
Write a program with three functions

1. Good morning function which prints “good morning”.
2. Good afternoon function which prints “good afternoon”.
3. Good night function which prints “good night”.

main() should call all of these in order 1→2→3
*/

#include <stdio.h>

// Function Prototype
void good_morning ();
void good_afternoon();
void good_night();

// Function Defination
void good_morning(){
    printf("Good Morning\n");
}

void good_afternoon(){
    printf("Good Afternoon\n");
}

void good_night(){
    printf("Good Night\n");
}

int main(){
    good_morning(); // Function Call
    good_afternoon(); // Function Call
    good_night(); // Function Call

    return 0;
}