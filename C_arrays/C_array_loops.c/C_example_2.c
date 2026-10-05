// EXAMPLE 2 : making better array 

#include<stdio.h>
int main()
{
    int myNum[] = {1 , 2 , 3, 4 ,5 ,6};
    int length = sizeof(myNum)/sizeof(myNum[0]) ;

    for(int i=0 ; i < length ; i++ )
    {
        printf("The value of index %d is : %d\n", i ,myNum[i]);
    }

    return 0;
}