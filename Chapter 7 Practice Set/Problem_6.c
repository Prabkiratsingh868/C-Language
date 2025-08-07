// Write a program containing functions which counts the number of positive integers in an array

#include <stdio.h>

int count(int a[] , int n){ // n is the size of the array
    int number_of_positive = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            number_of_positive++;
        }
    }
    return number_of_positive;
}

int main(){
    int a[] = {1,-2,3,-4,5,-6,7,-8,9,10}; // Intialising the array while declaration
    printf("The value of number of positive is %d\n" , count(a,10));


    return 0;
}