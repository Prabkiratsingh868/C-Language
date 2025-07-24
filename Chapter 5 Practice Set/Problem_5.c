/*
What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);
*/

#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n" , a , ++a , a++);
    // 4  5  5 When the evaluation order is from left to right
    // 6  6  4 When the evaluation order is from right to left  
    
    // Both are Correct 4 4 5 or 6 6 4

    // When the evaluation order is not defined the compiler determine (right to left)

    // a++ increments first then prints
    // ++a prints first then increments

    return 0;
}