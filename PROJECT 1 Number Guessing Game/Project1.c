/*
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.

Hint: Use loop & use a random number generator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Intialize the random number
    srand(time(0));

    // Generate the number between 1 to 100
    int randomnumber = (rand() %100)+1;
    int number_of_guesses = 0;
    int guessed;

    do{
        printf("Guess the number\n");
        scanf("%d" , &guessed);
        if(guessed>randomnumber){
            printf("Lower number please\n");
        }
        else if(guessed<randomnumber){
            printf("Higher number please\n");
        }
        else{
            printf("Congratulations\n");
        }
        number_of_guesses++;

    }while(guessed!=randomnumber); // Condition: Guessed number is not equal to random number

    printf("You guessed the number in %d guesses" , number_of_guesses); 

    return 0;
}