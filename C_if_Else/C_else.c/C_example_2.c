// EXAMPLE 2 

#include<stdio.h>
#include<stdbool.h>
int main ()
{
    int time = 20;

    bool the_Time = time < 18;

    if(the_Time)
    {
        printf("good morning");
    }
    else 
    {
        printf("good evening");
    }
    return 0;
}