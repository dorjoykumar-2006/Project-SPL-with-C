 // Example 4 : copy strings using strcpy() function 

#include<stdio.h>
#include<string.h>

int main()
{
    char str_1[] = "Hey John , how are you?";
    char str_2[50];

    strcpy(str_2,str_1); //copies the string from str_1 to str_2

    printf("The copied string is : %s",str_2); //prints the copied string

    return 0;
}