// Example 1 : declare and define a inline function

#include<stdio.h>

    static inline int add(int a, int b) //inline function definition
{
    return a + b;
}

int main()
{
    printf("Sum of 5 and 10 is : %d\n", add(5, 10)); //inline function call

   return 0;
}