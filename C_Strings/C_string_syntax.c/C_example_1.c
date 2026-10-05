// Example 1 : basic string syntax

#include<stdio.h>
int main()

{
    char string[] = "Hello World";
    char string_1[] = {'H','e','l','l','o',' ','W','o','r','l','d', '!' ,'\0'}; //space also counts as a character
    printf("My string is : %s\n",string); //prints the string
    printf("My string 1 is : %s\n",string_1); //prints the string

    return 0;
}