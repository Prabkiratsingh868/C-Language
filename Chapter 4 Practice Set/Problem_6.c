// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop

// Write the program to print the first ten n natural numbers using do while and for loop

#include <stdio.h>

int main(){
//  Using do while loop
//     int sum = 0;
//     int i = 1;
//     do{
//         sum += i; // sum = sum + i
//         i++; // incrementing operator
//     }while(i<=10); // condition
    
//     printf("the sum of first ten n natural numbers is %d\n" , sum);

//     return 0;


/*
Using For loop
*/
int sum = 0;
for(int i = 1; i<=10; i++){
    sum += i; // sum = sum + i

}
printf("the sum of first ten n natural numbers is %d\n" , sum); // print function


return 0;
}
