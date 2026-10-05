// EXAMPLE 1 : using for loop in array

#include<stdio.h> 
int main()
{ 
    int myNum[] = {11 , 22 , 33 ,44 ,55 };
    
    for(int i=0 ; i<=4 ; i++)
    {
        printf("the value of index %d is : %d\n", i, myNum[i]);
    }

    return 0;
}