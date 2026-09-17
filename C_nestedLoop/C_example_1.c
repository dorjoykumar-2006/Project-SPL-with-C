// Example 1 

#include<stdio.h>
int main ()
{
    int i , j;

    for(i=0; i<=2 ; ++i)
    {
        printf("outer:%d\n",i);

        for(j=0 ; j<=2 ; j++)
        {
            printf("\tinner:%d\n",j);  //  "/t means 8 space or 2 tabs"
        }
    }
    return 0;
}