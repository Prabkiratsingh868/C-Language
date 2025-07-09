// int k = 3.0/9  Value of k and why?

#include <stdio.h>

int main(){
    int k = 3.0/9;
    printf("The value of k is %d" , k);

    // in case of float the value of k is 0.33 it is integer so it is demotion to 0.33 to 0
    // the value of k is 0

    return 0;
}