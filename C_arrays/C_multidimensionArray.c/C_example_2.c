// Example 2 : change elements in 2 dimensional array

#include<stdio.h>
int main()
{
    int matrix[2][3] = {{1 , 2 , 3} , {4 , 5 , 6}};

    matrix[0][0] = 9;

    printf("The changed value is : %d\n",matrix[0][0]);

    return 0;
}