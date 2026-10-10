// Example 5 : return the value of a function in C

#include<stdio.h>
int myFunction(int x)
{
    return 5 + x;

}  

int main()
{
    int result = myFunction(3);  //function call

    printf("The result is : %d\n",result);
    printf("The result is : %d\n",myFunction(5));  //function call

    return 0;
}