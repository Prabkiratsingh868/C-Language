/* 
If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
(i) True.
(ii) False.
(iii) Depends
*/

// The answer of *(S+3) = 4 because the S refers to element 1 

// (ii) False.

#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    // int*ptr = &array[0];
    int* ptr = array; // We can also write this instead of this int*ptr = &array[0];
    printf("The value at index %u is %d\n" , ptr+3 , *(ptr+3));        


    return 0;
}