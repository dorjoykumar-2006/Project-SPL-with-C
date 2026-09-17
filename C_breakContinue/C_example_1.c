//EXAMPLE 1 : break statement 

#include<stdio.h>
int main()
{
    int i;

    for(i=0 ; i<=10 ; i++)
    {
        if(i==4)
        {
            break;
        }
    printf("the value is :%d\n",i);
    }
    return 0;
}