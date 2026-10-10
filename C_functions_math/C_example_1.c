// Example 1 : square root , floor , ceil functions in C

// To use the math functions we have to use math.h header file in C 

#include<stdio.h>
#include<math.h>
int main()
{
    float x = sqrt(16);  //calculates the square root of 16
    float y = floor(3.7); //calculates the floor value of 3.7
    float z = ceil(3.7);  //calculates the ceil value of 3.7

    printf("Square root of 16 is : %.2f\n",x);
    printf("Floor of 3.7 is : %.2f\n",y);
    printf("Ceil of 3.7 is : %.2f\n",z);

    return 0;
}