#include <stdio.h>

int main(){
int a;
int b;
printf("Enter the value of a\n");
scanf("%d" , &a);  // scanf is used to take the input from user

//&a is the address of a where the user can give the value

printf("Enter the value of b\n");
scanf("%d" , &b); // %d for int and &b is the address of b

printf("The value of a is %d\n" , a);
printf("The value of b is %d\n" , b);

// \n for new line it make our program good and clear

return 0;
}