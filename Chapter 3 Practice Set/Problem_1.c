/* What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");
*/
#include <stdio.h>

int main(){
    int a = 10;
    if(a = 11){
        printf("I am 11"); // This prints i am 11 because this is non zero value
    }
    else{
        printf("I am not 11");
    }

    // every non zero value is true and executed

    return 0;
}