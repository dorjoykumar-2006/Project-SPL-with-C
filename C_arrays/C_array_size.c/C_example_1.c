// EXAMPLE 1 : size of array

#include<stdio.h>
int main()
{
    int arr[] = {11 , 22 , 33 , 44 , 55};

    printf("%d",sizeof(arr));

    return 0;
}

/*note : it prints 20 instead of 5 why?
because sizeof operator returns the size of a type in "bytes"*/

// integer type = 4 bytes             
   