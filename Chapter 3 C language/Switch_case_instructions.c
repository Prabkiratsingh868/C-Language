#include <stdio.h>

int main(){
    int a;
    printf("Enter the a\n");
    scanf("%d" , &a);
    switch(a){
        case 1:
        printf("You entered number 1\n");
        break; //Exit the loop now!
        
        case 2:
        printf("You entered number 2\n");
        break;

        case 3:
        printf("You entered number 3\n");
        break;

        case 4:
        printf("You entered number 4\n");
        break;

        default:
        printf("This number is invalid");
    }

    return 0;
}