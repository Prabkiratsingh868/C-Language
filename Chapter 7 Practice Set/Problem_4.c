// Repeat problem 3 for a general input provided by the user using scanf

#include <stdio.h>


int main(){
    int array[10];
    int n;
    
    printf("Enter the number\n");
    scanf("%d" , &n);

    for(int i = 0; i<10; i++){
        array[i] = n * (i+1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n" , n , i+1 , array[i]);
    }
    

    return 0;
}