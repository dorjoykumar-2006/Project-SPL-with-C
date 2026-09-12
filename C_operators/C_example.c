// EXAMPLE 1 

#include<stdio.h>
int main()
{
    int sum1= 100 + 50; // addition operator 150 
    int sum2= sum1 + 100 ; // addition operator 250 
    int sum3 = sum1 + sum2; // addition operator 400

    printf("The sum1 is: %d\n",sum1);
    printf("The sum2 is: %d\n",sum2);   
    printf("The sum3 is: %d\n",sum3);
    return 0;
}