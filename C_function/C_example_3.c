// Example 3 : calculate the sum of two numbers using function in C

#include<stdio.h>
void calculateSum()
{
    int x = 10 , y = 20 , sum; 
    sum = x + y;
    printf("The sum is: %d\n", sum);
}

int main()
{
    calculateSum();  //function call
    return 0;
}