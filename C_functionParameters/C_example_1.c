// Example 1 : function with parameters in C

#include<stdio.h>
void myFunction(char name[])
{
    printf("Hello %s\n",name);
}

int main()
{
    myFunction("John!");  //function call
    myFunction("Doe!");   //function call
    return 0;
}