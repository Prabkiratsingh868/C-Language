// Write a program to read a text file character by character and write its content twice in separate file.

#include <stdio.h>

int main(){
    char ch;
    FILE* ptr;
    FILE* ptr2;
    ptr = fopen("Prab1.txt"  ,"r"); // r for reading the file
    // ptr2 = fopen("Kirat.txt" , "w"); // w for writing the file
    ptr2 = fopen("Kirat.txt" , "a"); // a for append

    while(1){
        ch = fgetc(ptr);
        if(ch == EOF){ // When all the content has been read break the loop!
            break;
        }
        else{
            fprintf(ptr2 ,"%c" , ch);
            fprintf(ptr2 ,"%c" , ch);
            printf("%c" , ch);
        }

    }


    return 0;
}
