// Example 1 : declaration and simple recursion function 

#include<stdio.h>

int sum(int x) 
{
    if(x>0)
    {
        return x + sum(x-1); //recursive function call
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(10); //function call

    printf("Sum of first 10 natural numbers is : %d\n", result);

    return 0;
}