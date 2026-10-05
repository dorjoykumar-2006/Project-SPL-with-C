// Example 3 : modify the string 

#include<stdio.h>
int main()
{
    char string[] = "Hello World";
    string[0] = 'J'; 
    
    //modifies the first character of the string

    printf("The modified string is : %s",string); //prints the modified string

    return 0;
}