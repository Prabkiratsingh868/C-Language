/* Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/

#include <stdio.h>

int main(){
    int n = 3;
    for(int i = 0; i<n; i++){
        // If i = 0 print 1 star
        // If i = 1 print 3 stars
        // If i = 2 print 5 stars
        // number_of_stars = (2*i + 1)
        for(int j = 0; j<2*i+1; j++){ // Main Condition
            printf("*");
        }
        printf("\n"); // This printf prints the new line

    }

    return 0;
}