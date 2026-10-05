// Example 1 : single quote and double quote and slash 

#include<stdio.h>
int main()
{
    char string[] = "We are the so called \"vikings\" from the north."; //double quote
    char string_1[] = "We are the \'people\'."; //single quote
    char string_2[] = "this symbol \\ is called a slash."; //slash
    char string_3[] = "The \\\'people\'\\ of earth are called \"humans\"."; //single quote and double quote and slash
    
    printf("String: %s\n", string);
    printf("String 1: %s\n", string_1);
    printf("String 2: %s\n", string_2);
    printf("String 3: %s\n", string_3);

    return 0;
}