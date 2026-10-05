// Example 2 : print only value of pointer

#include<stdio.h>
int main()
{
    int age = 20;
    int *ptr ;
    
    ptr = &age;

    printf("The value of pointer : %d\n",*ptr);

    return 0;
}