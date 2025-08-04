// A Pointer can be incremented to point to the next memory location of that type

#include <stdio.h>

int main(){
    // POINTER ARITHMETIC USING INTEGER POINTER
    // int i = 10;
    // int* ptr = &i; // ptr is the integer pointer store the address of i

    // printf("The address of i is %u\n" , &i);
    // printf("The address of i is %u\n" , ptr);
    // ptr++;
    // printf("The address of i is %u\n" , ptr);

    // POINTER ARITHMETIC USING CHARACTER POINTER
    char i = 'P';
    char* ptr = &i; // ptr is the character pointer store the address of i

    printf("The address of i is %u\n" , &i);
    printf("The address of i is %u\n" , ptr);
    ptr++;
    printf("The address of i is %u\n" , ptr);

    // Integer pointer takes 4 bytes in memory location while incrementing
    // Character pointer takes 1 bytes in memory location while incrementing
    // Floating pointer takes 4 bytes in memory loacation while incrementing
    

    return 0;
}