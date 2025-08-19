/*
Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/

#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("Salary.txt" , "w");

    char name1[20];
    char name2[20];
    int salary1;
    int salary2;

    printf("Enter name1\n");
    scanf("%s" , name1);
    printf("Enter salary\n");
    scanf("%d" , &salary1);

    printf("Enter name2\n");
    scanf("%s" , name2);
    printf("Enter salary\n");
    scanf("%d" , &salary2);

    fprintf(ptr,"%s" , name1);
    fprintf(ptr ,"%d" , ",");
    fprintf(ptr ,"%d" , salary1);
    fprintf(ptr ,"%c" , '\n');

    
    fprintf(ptr,"%s" , name2);
    fprintf(ptr ,"%d" , ",");
    fprintf(ptr ,"%d" , salary2);
    fprintf(ptr ,"%c" , '\n');


    return 0;
}