// The airthmetic operation between:
/*
Int and Int = Int
Int and Float = Float
Float and Float = Float
*/
#include <stdio.h>

int main(){
    int a = 10.5; //int demotion of 10.5 to 10 automatically
    int b = 10;
    float c = 10; // float promotion of 10 to 10.0 automatically
    printf("The multiplication of a and b is %d\n" , a*b); // int and int is always int
    printf("The multiplication of b and c is %f\n" , b*c); // int and float is always float 
    
    // the operation between float and float is always float

    // 5/2 is 2
    // 2/5 is 0 
    // Because the operation between int and int is int

    // 5.0/2 is 2.5
    // 2.0/5 is 0.4
    // Because the operation between int and float is float




    return 0;
}