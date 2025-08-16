// Complete this show function to display the content of employee

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; // Semicolon is important

// Function Prototype
void show(struct employee e);

// Function Defination
void show(struct employee e){
    printf("Code is %d Salary is %f Name is %s" , e.code, e.salary, e.name);

}

int main(){
    struct employee e1;
    e1.code = 45;
    e1.salary = 82;
    // e1.name = "Prabkirat"; // This is invalid we can use strcpy function from string.h
    strcpy(e1.name, "Prabkirat");

    show(e1); // Function Call


    return 0;
}