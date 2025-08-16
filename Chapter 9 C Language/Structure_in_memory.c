#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1 = {45,88,"prabkirat"};

    printf("The address of e1 is %d\n" , &e1.code);
    printf("The address of e1 is %d\n" , &e1.salary);
    printf("The address of e1 is %d\n" , &e1.name);

    
    return 0;
}