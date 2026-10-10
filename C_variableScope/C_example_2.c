// Example 2 : global scope 

#include<stdio.h>

int x = 10;  //global variable
int y = 20;  //global variable

void myFunction()  //function declaration
{
    printf("The value of x is : %d\n",x);
}

int main()
{
    myFunction();  

    printf("The value of x is : %d\n",y);  //this will work because x is a global variable and can be accessed from anywhere in the program.
   
    return 0;
}

// a global variable can be accessed from anywhere in the program, including inside functions. 