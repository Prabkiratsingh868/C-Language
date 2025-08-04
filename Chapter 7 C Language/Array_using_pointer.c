#include <stdio.h>

int main(){
    int marks[] = {90,88,76,56}; // Intialising the value of array while decalation
    int* ptr = &marks[0];
    // int* ptr = marks; // Same as writing int* ptr = &marks[0];

    
    for(int i = 0; i<4; i++){
        // printf("The marks at index %d is %d\n" , i , marks[i]);
        printf("The marks at index %d is %d\n" , i , *ptr);
        ptr++;
    }


    return 0;
}