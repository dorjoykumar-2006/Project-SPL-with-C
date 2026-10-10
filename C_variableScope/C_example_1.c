// Example 1 : Local scope 

#include<stdio.h>
void myFunction()  //function declaration
{
    int x = 10;   //local variable
    printf("The value of x is : %d\n",x);
}

int main()
{
    myFunction();  

    // printf("The value of x is : %d\n",x);  //this will give an error because x is a local variable and cannot be accessed outside of the function in which it is declared.
   
    return 0;
}

// a local variable can only be accessed within the function in which it is declared. It cannot be accessed outside of that function.