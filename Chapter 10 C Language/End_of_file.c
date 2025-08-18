// fgetc returns EOF When all the characters from a file have been read we can write a check to detect the EOF

#include <stdio.h>

int main(){
    char ch;
    FILE* ptr;
    ptr = fopen("Kirat.txt" , "r");

    while(1){
        printf("%c" , ch);
        ch = fgetc(ptr); // When all the content from a file has been read break the loop
        if(ch == EOF){
            break;
        }
    }

    return 0;
}