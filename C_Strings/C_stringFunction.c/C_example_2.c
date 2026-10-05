// Example 2 : Difference between strlen() and sizeof()


#include<stdio.h>
#include<string.h>
int main()
{
    char string[] = "Hello World";
    char string_1[50] = "Hello World!";
    int length = strlen(string);   //calculates the length of the string
    int size = sizeof(string);     //calculates the size of the string including the null terminator
    int size_1 = sizeof(string_1); //calculates the size of the second string

    printf("The length of the string is : %d\n", length);      //prints the length of the string=26
    printf("The size of the string is : %d\n", size);          //prints the size of the string=27
    printf("The size of the second string is : %d\n", size_1); //prints the size of the second string=50

    return 0;
}