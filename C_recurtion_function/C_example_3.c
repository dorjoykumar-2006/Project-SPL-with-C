// Example 3 : calculate factorial of a number using recursion

#include<stdio.h>

int fact(int x)
{
    if(x>1)
    {
        return x * fact(x-1); //recursive function call
    }
    else
    {
        return 1;
    }
}

int main()
{
    int result = fact(5); //function call

    printf("Factorial of 5 is : %d\n", result);

    return 0;
}