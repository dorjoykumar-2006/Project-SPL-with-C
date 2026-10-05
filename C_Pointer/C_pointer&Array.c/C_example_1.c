// Example 1 : Address of array 

#include<stdio.h>
int main ()
{
    int arr[5] = {1 , 2 , 3 , 4 , 5};

    for(int i=0 ; i<5 ; i++) 
    {
         printf("\nThe address of value in decimal is : %d\n",&arr[i]);  // outputs the address in decimal number
        printf("The address of value in hexadecimal is : %x\n",&arr[i]);  // outputs the address in hexadecimal number
    }

    return 0;
} 