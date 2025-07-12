// Continue Statement in C

#include <stdio.h>

int main(){
    for(int i = 1; i<=10; i++){
        if(i==5){
            continue; // Skip the iteration now
        }
        printf("the value of i is %d\n" , i);
    }

    // Continue Statement in C skips the current iteration of loop

    return 0;
}