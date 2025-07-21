// Quick-quiz: Use the library function to calculate the area of square with side a 

// Area of square = a square

#include <stdio.h>
#include <math.h> // Library function 

int main(){
    int a = 9;
    printf("the area of square is %f\n" , pow(a,2));
    // We can use %f because the pow function generates double
    
    // Pow function come from math.h

    return 0;
}

