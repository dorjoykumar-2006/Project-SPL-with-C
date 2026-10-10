// Example 3 : Concenat(connecting) two strings using strcat() function

#include<stdio.h>
#include<string.h>
int main()
{
    char str_1[] = "Hello ";
    char str_2[] = "World!";

    strcat(str_1,str_2); //concatenates the two strings and stores the result in str_1

    printf("The concatenated string is : %s",str_1); //prints the concatenated string

    return 0;
}