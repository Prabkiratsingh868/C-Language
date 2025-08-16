#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];

}; // Semicolon is necessary

int main(){
    struct employee e1;
    e1.code = 12;
    // struct employee *ptr;
    // ptr = &e1;
    struct employee *ptr = &e1;

    // printf("%d" , (*ptr).code);
    printf("%d" , ptr->code); // Exactly same as (*ptr).code)
    
    // This is called as arrow operator


    return 0;
}