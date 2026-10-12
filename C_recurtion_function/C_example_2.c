// Example 2 : use recursion to countdown from 5

#include<stdio.h>

void countdown(int n);//recursive function definition

int main()
{
    countdown(5); //function call

    return 0;
}

void countdown(int n) //recursive function definition
{
    if(n>0)
    {
        printf("%d ", n); //print the current number
        countdown(n-1); //recursive function call
    }
}
