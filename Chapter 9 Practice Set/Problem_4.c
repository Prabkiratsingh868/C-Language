// Write a program to illustrate the use of arrow operator → in C

#include <stdio.h>

typedef struct emp{
    int salary;
    float score;
}employee; // Semicolon is important

int main(){
    employee e1;
    employee* ptr = &e1;
    // (*ptr).salary = 85;
    // (*ptr).score = 52;
    ptr->salary = 85;
    ptr->score = 52;

    // printf("The value of salary is %d and the value of score is %f\n" , (*ptr).salary, (*ptr).score);

    printf("The value of salary is %d and the value of score is %f\n", ptr->salary, ptr->score); // Arrow operator


    return 0;
}