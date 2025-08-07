// Repeat problem 7 for a custom input given by the user

#include <stdio.h>

int main(){
    int n1 , n2 , n3;
    printf("Enter three numbers\n");
    scanf("%d %d %d" , &n1, &n2 , &n3);

    int array[3][10];
    int mul[] = {n1,n2,n3};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            array[i][j] = mul[i] * (j+1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n" , array[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}