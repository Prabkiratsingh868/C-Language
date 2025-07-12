// Write the program to print the first n natural numbers in reverse order

#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    for(int i = n; i; i--){
        printf("%d\n" , i);
    }

    return 0;
}