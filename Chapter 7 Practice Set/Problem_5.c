// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>


void printArray(int a[] , int n){ // n is the size of the array
    for(int i = 0; i<n; i++){
        printf("%d" , a[i]);
    }
    printf("\n");

}

void reverse(int array[] , int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;

    }
}

int main(){
    int array[] = {1,2,3,4,5,6}; // Intialising the array while declaration
    printArray(array , 6);
    reverse(array ,  6);
    printArray(array , 6);


    return 0;
}