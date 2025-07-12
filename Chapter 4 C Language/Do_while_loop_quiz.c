// Write a program to print first n natural numbers using do while loop
/*
Input 4
Output
1
2
3
4
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int i = 1;

    do{
        printf("%d\n" , i);
        i++;
    }while(i<=n);
    return 0;
}