// We can use typedef keyword to create an alias name for datatype in c

// typedef is most commonly used with structure

#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp; // Semicolon is important

int main(){
    // typedef int prab;
    // int a = 10; // We can use prab instead of int by using typedef keyword

    // typedef keyword rename the datatype and create the datatype of our own choice

    // printf("The value of a is %d\n" , a);

    // typedef struct employee emp; // This is also valid typedef

    // struct employee e1;
    emp e1;
    emp* ptr = &e1;
    e1.code = 45;
    e1.salary = 65;
    strcpy(e1.name, "Prabkirat");
    printf("%d %f %s\n" , e1.code, e1.salary , e1.name);
    printf("%d %f %s" , ptr->code, ptr->salary, ptr->name); // Arrow operator


    return 0;
}