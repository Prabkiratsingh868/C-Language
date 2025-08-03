#include <stdio.h>

// Function Prototype
void swap(int* , int*);


// Function Defination
void swap(int* a , int* b){  // This function swap the value of a and b
    int temp; 
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 4; 
    int b = 2;
    swap(&a,&b); // Function Call
    printf("The value of a is %d and the value of b is %d\n" , a , b);
    
    // Now the value of a is 2 and the value of b is 4

    return 0;
}