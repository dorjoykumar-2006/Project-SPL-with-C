// Example 1 : using putc() function and for loop to write to a file

#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char str[50] = "Hey there , how are you?";
    int i;

    int length = strlen(str);

    file = fopen("test.txt" , "w");

    if(file == NULL)
    {
        printf("Error in creating file");
    }
    else
    {
        printf("File created successfully");

        for(i=0; i<length; i++)
        {
            putc(str[i],file); //writes the string to the file character by character
        }
        printf("\nString written to the file successfully");
        fclose(file);
    }

    return 0;
}