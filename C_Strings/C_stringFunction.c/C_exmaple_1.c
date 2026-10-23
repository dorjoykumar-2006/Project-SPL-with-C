// Example 1 : Use of string header file and strlen() function

#include<stdio.h>
#include<string.h>
int main()
{
    char string[] = "Hello World";
    char string_1[50];
    printf("Enter a string: ");
    gets(string_1); //reads the string from the user

    int length = strlen(string); //calculates the length of the string

    printf("\nThe length of the string is : %d",length); //prints the length of the string
    printf("\nThe string entered by the user is : %s",string_1); //prints the string entered by the user
    return 0;
}