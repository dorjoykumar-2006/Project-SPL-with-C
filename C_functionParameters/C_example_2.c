// Example 3 : Function with multiple parameters in C

#include<stdio.h>
void myFunction(char name[], int age)
{
    printf("Hello %s , is your age %d?\n",name,age);
}

int main()
{
    myFunction("John", 25);  //function call
    myFunction("Doe", 30);   //function call
    return 0;
}