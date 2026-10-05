// EXAMPLE 2 : find the total number elements in a array 

#include<stdio.h>
int main()
{
    int myNum[]= {1 ,2 ,3 ,3 ,4 ,4};
    int length = sizeof(myNum)/sizeof(myNum[0]);

    printf("Total elements in the array is : %d",length);

    return 0;

}

// sizeof(myNum[o]) : returns the size 0f element that is located in index 0 of array in bytes 