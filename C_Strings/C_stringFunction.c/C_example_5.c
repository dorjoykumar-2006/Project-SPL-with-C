// Example 5 : Compare the length of two strings using strcmp() function

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hey";
    char str3[] = "Hi";
    
    if(strcmp(str1,str2) == 0)
    {
        printf("str1 and str2 are equal\n");
    }
    else
    {
        printf("The str1 and str2 are not equal\n");
    }
    if(strcmp(str1,str3) == 0)
    {
        printf("str1 and str3 are equal\n");
    }
    else
    {
        printf("The str1 and str3 are not equal\n");
    }
    
    return 0;
}