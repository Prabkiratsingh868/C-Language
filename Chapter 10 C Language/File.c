// A File is the data stored in the storage device

// The random access memory is volatile and its content is lost once the program terminates

// A c program can talk to the file by reading the content from it and writing the content from it

#include <stdio.h>

int main(){
    // File is the structure which needs to be created for opening the file
    FILE* ptr;
    ptr = fopen("Prab.txt" , "r"); // r is for reading the file
    // We can create the file Prab.txt
    int num;
    fscanf(ptr ,"%d" , &num);
    printf("%d" , num);

    fclose(ptr); // Closing the file

    return 0;
}