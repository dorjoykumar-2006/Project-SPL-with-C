// Example 1 : how to create a file 

#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("test.txt" , "w");

    if(file == NULL)
    {
        printf("Error in creating file");
    }
    else
    {
        printf("File created successfully");
        fclose(file);
    }

    return 0;

}