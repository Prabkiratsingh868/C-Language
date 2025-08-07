// Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively

#include <stdio.h>


int main(){
    int array[3][10]; // 2 dimentional array
    int mul[] = {2,7,9};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            array[i][j] = mul[i] * (j+1);
        }
    }
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            printf("The value of arr[i][j] is %d\n" , array[i][j]);
        }
        printf("\n");
    }



    return 0;
}