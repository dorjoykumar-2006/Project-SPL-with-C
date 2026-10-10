// Example 4 : local and global scope in C

#include<stdio.h>
int x = 10;  //global variable

void myFunction()  //function declaration
{
    int x = 20;   //local variable
    printf("The value of x is : %d\n",x); // this will print the local variable x
}

int main()
{
    myFunction();
    printf("The value of x is : %d\n",x);  //this will print the global variable x
    return 0;
}