// example 5 : print string using loop

#include<stdio.h>
int main()
{
    char string[] = "volvo car"; // space also counts as a character

    int length = sizeof(string)/sizeof(string[0]); //calculates the length of the string
    
    for(int i=0; i < length; i++)
    {
        printf("%c",string[i]); //prints the string character by character
    }
    return 0;
}