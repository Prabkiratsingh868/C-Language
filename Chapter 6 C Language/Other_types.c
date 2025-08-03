#include <stdio.h>

int main(){
    // int i = 10;
    // int* j = &i; // j is a pointer pointing to i (j is a integer pointer)
    
    // printf("The address of i is %u\n" , &i);
    // printf("The address of i is %u\n" , j);

    char i = 'P';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer)
    
    printf("The address of i is %u\n" , &i);
    printf("The address of i is %u\n" , j);

    float k = 12.5;
    float* k1 = &k; // k1 is the pointer pointing to k (k1 is a float pointer)

    printf("The address of k is %u\n" , &k);
    printf("The address of k is %u\n" , k1);

    // The value at address of star operator
    printf("The value at address i is %d\n" , *(&i));



    return 0;
}