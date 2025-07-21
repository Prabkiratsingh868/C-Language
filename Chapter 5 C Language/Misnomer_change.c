#include <stdio.h>

// Function Prototype
int change(int);

// Function Defination
int change(int a){
    a = 65; // misnomer
    return 0;
}

int main(){
    int b = 20;
    change(b); // Function Call
    printf("the value of b is %d\n" , b); // the value of b remains 20
    
    return 0;
}