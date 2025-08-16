// just like array of integer , array of float , array of char we can make array of structure

#include <stdio.h>

    struct employee{
        int code;
        float salary;
        char name[20];

    }; // Semicolon is required

int main(){
    struct employee facebook[100]; // array of structure
    // We can access the data using:
    facebook[0].code = 45;
    facebook[1].code = 90;
    // We can go upto till the way facebook[99]

    printf("The value of facebook[0] and facebook[1] is %d %d" , facebook[0].code, facebook[1].code);
    

    return 0;
}