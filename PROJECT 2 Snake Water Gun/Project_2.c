/*
Snake, water, gun or rock, paper, scissors is a game most of us have played during
school time. (I sometimes play it even now).

Write a C program capable of playing this game with you.

Your program should be able to print the result after you choose snake/water or gun.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Intialising the random number generator
    srand(time(0));
    int player , computer = rand() % 3;
    /*
    0 --> Snake
    1 --> Water
    2 --> Gun
    */
   printf("Choose 0 for snake 1 for Water and 2 for Gun\n");
   scanf("%d" , &player);
   printf("Computer Choose %d\n" , computer);

   if(player == 0 && computer == 0){
    printf("Its Draw!\n");
   }
   else if(player == 0 && computer == 1){
    printf("You Won!\n");
   }
   else if(player == 0 && computer == 2){
    printf("You Lose!\n");
   }
   else if(player == 1 && computer == 0){
    printf("You Lose!\n");
   }
   else if(player == 1 && computer == 1){
    printf("Its Draw!\n");
   }
   else if(player == 1 && computer == 2){
    printf("You Won!\n");
   }
   else if(player == 2 && computer == 0){
    printf("You Won!\n");
   }
   else if(player == 2 && computer == 1){
    printf("You Lose!\n");
   }
   else if(player == 2 && computer == 2){
    printf("Its Draw!\n");
   }
   
   else{
    printf("Please try again\n");
   }
 

    return 0;
}