// Example 1 : 2 Dimensional  array

#include<stdio.h>
int main()
{
    int matrix[2][3] = {{2 , 3 , 4} , {5 , 6 , 7}}; 
    // 1st dimension represents row
    // 2nd dimension represents column
    
    printf("The value is : %d\n",matrix[0][2]);  //outputs 4

    return 0;
}