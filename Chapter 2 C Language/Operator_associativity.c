#include <stdio.h>

int main(){
    int x = 10;
    int y = 10;
    int z = 2;
    printf("The value is %d\n" , x*y/z); //10*10/2 = 50
    printf("The value is %d\n" , x/y*z); //10/10*2 = 2
    
    // It is always left to right

    return 0;
}