#include <stdio.h>

int main(){
    int i = 10;
    i = i + 10; 
    printf("the value is %d\n" , i); // 20
    i++; //incrementing operator
    printf("the value is %d\n" , i); // 21
    i--; // decrementing operator
    printf("the value is %d\n" , i); // 20
    printf("the value of i is %d\n" , ++i); // 21



    // i++ increments first and then print i
    // ++i print first and then increments i

    // +++ operator does not exists
    
    // += , *= is compound assignment operator
    
    int n = 5;
    n+=10; // n = n + 10
    // n *= 4; // n = n * 4
    printf("the value of += is %d\n", n);

    return 0;
}