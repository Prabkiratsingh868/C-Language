#include <stdio.h>

int main(){
    FILE* ptr;
    // ptr = fopen("Kirat.txt" , "w"); // w is for writing the file
    ptr = fopen("Kirat.txt" , "a"); // Append When the file doesnot exist it will be created

    int num = 80;
    fprintf(ptr ,"%d" , num);
    printf("%d" , num);
    fclose(ptr); // Closing the file

    return 0;
}