#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; // Semicolon is required

int main(){
    struct employee e1 = {25,75,"Prabkirat"};
    printf("%d %f %s" , e1.code, e1.salary , e1.name);


    return 0;
}