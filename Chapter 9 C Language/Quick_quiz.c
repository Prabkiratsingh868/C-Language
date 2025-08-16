// Write a program to store the details of 3 employees from user defined data. Use the structure declared above

#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; // Semicolon is important

int main(){
    struct employee e1 , e2 , e3;
    printf("Enter the code of employee1\n");
    scanf("%d" , &e1.code);

    printf("Enter the salary of employee1\n");
    scanf("%f" , &e1.salary);

    printf("Enter the name of employee1\n");
    scanf("%s" , &e1.name);

    printf("%d %f %s\n" , e1.code, e1.salary , e1.name);

    printf("Enter the code of employee2\n");
    scanf("%d" , &e2.code);

    printf("Enter the salary of employee2\n");
    scanf("%f" , &e2.salary);

    printf("Enter the name of employee2\n");
    scanf("%s" , &e2.name);

    printf("%d %f %s\n" , e2.code, e2.salary , e2.name);

    printf("Enter the code of employee3\n");
    scanf("%d" , &e3.code);

    printf("Enter the salary of employee3\n");
    scanf("%f" , &e3.salary);

    printf("Enter the name of employee3\n");
    scanf("%s" , &e3.name);

    printf("%d %f %s\n" , e3.code, e3.salary , e3.name);


    return 0;
}