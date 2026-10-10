// Example 6 : calculate the sum of numbers 

#include<stdio.h>
int calculateSum(int x , int y) 
{
    return x + y;
}

int main()
{
    int result[3];

    result[0] = calculateSum(5, 10);  //function call
    result[1] = calculateSum(15, 20); //function call   
    result[2] = calculateSum(34, 56); //function call

    for(int i = 0; i < 3; i++)
    {
        printf("Result %d: %d\n", i+1, result[i]);
    }

    return 0;
}