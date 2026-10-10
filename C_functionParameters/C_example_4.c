// Example 4 : pass Arrays as a function parameters 

#include<stdio.h>
void myFunction(int myNumber[] ,int length)
{
    for(int i=0 ; i<length ; i++)
    {
        printf("The value of array's %dst element is : %d\n" , i+1 , myNumber[i]);
    } 

}

int main()
{
    int myNum[] = {10, 20, 30, 40, 50};

    int length = sizeof(myNum)/sizeof(myNum[0]);

    myFunction(myNum , length);

    return 0;
}