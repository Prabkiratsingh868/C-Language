// fgetc and fputc function is used to read and write the character from a file

#include <stdio.h>

int main(){
    FILE* ptr;
    // ptr = fopen("File.txt" , "r");
    ptr = fopen("File.txt" , "w");
    
    // fgetc function is used to read the character from a file
    // char c = fgetc(ptr);
    // printf("%c" , c);

    // fputc function is used to write the character from a file
    fputc('a' , ptr);

    fclose(ptr); // Closing the file
    

    return 0;
}