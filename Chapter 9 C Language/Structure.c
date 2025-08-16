// Structure is the collection of variables of different data types under single name

// Array and strings hold similar data(int , float , char)

// Structure can hold dissimilar data

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; // Semicolan is required

int main(){
    struct employee e1;
    // e1.name = "Prabkirat" // This is invalid we can change using strcpy function from string.h
    strcpy(e1.name, "Prabkirat");
    e1.code = 45;
    e1.salary = 90;
    printf("%d %s %f" , e1.code, e1.name, e1.salary);


    return 0;
}