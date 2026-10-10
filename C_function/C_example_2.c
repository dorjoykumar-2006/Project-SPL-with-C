// Example 2 : calling a function multiple times in C 

#include<stdio.h>
void myFunction()
{
    printf("i just got executed!\n");
}

int main()
{
    myFunction();  //function call
    myFunction();  //function call
    myFunction();  //function call
    return 0;
}