// Write a program using a function which calculates the sum and average of two numbers Use pointers and print the values of sum and average in main()

 #include <stdio.h>

 int* sum(int a , int b){
    int s = a + b;
    int* ptr = &s;
    printf("The sum of a and b is %d\n" , s);
    return ptr;

 }

 float* average(int a , int b){
    float avg = a+b/2.0;
    float* ptr = &avg;
    printf("The average of a and b is %d\n" , avg);
    return ptr;
 }

 int main(){
    int a = 10;
    int b = 10;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(a,b);
    ptr2 = average(a,b);
    printf("The address of sum is %u and the address of average is %u\n" , ptr1 , ptr2);

    
   return 0;  
}