// EXAMPLE 1 : size of array 

#include<stdio.h>
int main()
{
    int myNum[] = {22 , 33 ,44 ,55 ,66 ,77};
    int size = sizeof(myNum) ; 

    printf("Size of array = %d",size); //prints the size of data type in bytes

    return 0;
}