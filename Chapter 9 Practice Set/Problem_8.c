// Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>

struct bankaccount{
    int accnumber;
    char name[20];
    char ifsc[12];
    float balance;
}; // Semicolon is important

int main(){
    struct bankaccount e1 = {36050 , "Prabkirat" , "05A69C" , 44400};
    printf("%d %s %s %f\n" , e1.accnumber ,e1.name , e1.ifsc , e1.balance);


    return 0;
}