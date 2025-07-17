/* 
A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.
*/

// Answer a. At least once

#include <stdio.h>

int main(){
    int i = 1;
    do{
        printf("the value of i is %d\n" , i);
        i++;

    }while(i<=10);

    return 0;
}