// Write the program to print the first n natural numbers using for loop

#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    for(int i = 1; i<=n; i++){
        printf("%d\n" , i);

    }

    return 0;
}