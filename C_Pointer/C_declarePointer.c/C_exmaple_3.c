// Example 3 : Address , value with pointer

#include<stdio.h>
int main()
{
    int x = 10 ;
    int *ptr ;

    ptr = &x ;

    printf("The value of x : %d\n",x);
    printf("The address of x : %d\n",&x); // outputs the address of x 
    printf("The value of pointer : %d\n",*ptr); // outputs the value of x because the pointer pointing the value of x
    printf("The address of pointer : %d\n",&ptr); 

    return 0;

}