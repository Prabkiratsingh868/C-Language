// Break Statement in C
#include <stdio.h>

int main(){
    for(int i = 1; i<=10; i++){
        if(i==4){ // == is assignment operator for equality check
            break; //  It breaks the value and exit the loop
            // It do not print 1 to 10 it print 1 to 4 because it exits the loop
        }
        printf("the value of i is %d\n" , i);
    }
    
    // Break statement in C is used to exit the loop whether the condition is true of false
    // Break statement means exit the loop now


    return 0;
}