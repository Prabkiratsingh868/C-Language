#include <stdio.h>

int function(int[] , int);

// int function(int a[] , int n){
//              Or
   int function(int* a , int n){
    
    for(int i = 0; i<n; i++){
        printf("The value of i is %d\n" , i);
    }

}


int main(){
    int a = 10;
    printf("The value of a is %d\n" , a);
    function(&a, 6);


    return 0;
}