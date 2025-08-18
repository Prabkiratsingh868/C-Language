// Modify the program above to check whether the file exists or not before opening the file

#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("Prab1.txt" , "r");
    if(ptr == NULL){
        printf("This file is not exist Sorry!\n");
    }

    else{
    int num;
    fscanf(ptr ,"%d" , &num);
    printf("%d" , num);

    fscanf(ptr ,"%d" , &num);
    printf("%d" , num);
    }


    return 0;
}