// Array is the collection of similar elements

// Array intialisation Ways

#include <stdio.h>

int main(){
    int marks[] = {90,88,45,66,77}; // Arrays can be intialisation while declaration

    for(int i = 0; i<5; i++){
        printf("The value of array at index %d is %d\n"  , i, marks[i]);
    }

    return 0;
}