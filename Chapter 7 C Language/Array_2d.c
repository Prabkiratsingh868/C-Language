// Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.

#include <stdio.h>

int main(){
    int array[3][2]; // 2d or multi dimentional array
    for(int i = 0; i<3; i++){
        for (int j = 0; j < 2; j++)
        {
           printf("The value of array[%d][%d]\n" , i ,j);
           scanf("%d" , &array[i][j]);
        }
        
    }

    //     for(int i = 0; i<3; i++){
    //     for (int j = 0; j < 2; j++)
    //     {
    //        printf("The value of array[%d][%d] is %d\n" , i ,j , array[i][j]);
    //     }
        
    // }

        for(int i = 0; i<3; i++){
        for (int j = 0; j < 2; j++)
        {
           printf("%d" , array[i][j]);
        }
        printf("\n");
        
    }
     

    return 0;

}