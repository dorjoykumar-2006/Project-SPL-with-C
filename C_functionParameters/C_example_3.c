// Example 3 : calculate the sum of two numbers using function parameters in C

#include<stdio.h>
void calculateSum(int x , int y)  //function declaration with parameters
{
    int sum; 
    sum = x + y;
    printf("The sum is: %d\n", sum);
}

int main()
{
    calculateSum(5, 10);  //function call
    calculateSum(15, 20); //function call
    calculateSum(25, 30); //function call
    calculateSum (20 , 50); //function call
    return 0;
}