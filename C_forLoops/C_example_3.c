// Example 3 : sum of numbers between 0 and 5

#include<stdio.h>
int main()
{
    int sum=0 , i;

    for(i=0; i<=5 ; i++)
    {
        sum = sum + i ;
    }

    printf("%d\n",sum);
    return 0;
}