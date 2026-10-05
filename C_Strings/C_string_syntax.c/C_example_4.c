// Example 4 : loop through the string

#include<stdio.h>
int main()
{
    char string[] = "Hello World";
    int i;

    for(i=0; i < 11; i++)
    {
        printf("%c",string[i]); //prints the string character by character
    }

    return 0;
}