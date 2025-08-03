#include <stdio.h>

int main(){
    int i = 10;
    int* j = &i; // j is the pointer pointing to i (j store the address of i)
    int** k = &j; // Pointer to Pointer
    
    printf("The value of i is %d\n" , i);
    printf("The value at j is %d\n" , *j);
    printf("The value at k is %d\n" , **k);

    // We can also go further int *** but we mostly use int * and int ** in real world programs

    return 0;
}