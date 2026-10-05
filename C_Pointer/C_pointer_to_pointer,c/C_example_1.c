// Example 1 : declare pointer to pointer

#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr ;

    printf("The value of X = %d\n" , x );
    printf("The value of *ptr = %d\n" , *ptr );
    printf("The value of **ptr = %d\n" , **pptr );

    return 0;
}