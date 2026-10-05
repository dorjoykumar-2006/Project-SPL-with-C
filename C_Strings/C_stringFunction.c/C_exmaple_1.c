// Example 1 : Use of string header file and strlen() function

#include<stdio.h>
#include<string.h>
int main()
{
    char string[] = "Hello World";
    int length = strlen(string); //calculates the length of the string

    printf("The length of the string is : %d",length); //prints the length of the string

    return 0;
}