//Example 2 : find the shortest age among the ages

#include<stdio.h>
int main()
{
    int age[] = {2 ,5 ,1 ,7 ,9 };
    int shortage = age[0];
    int length = sizeof(age)/sizeof(age[0]); 
    

    for(int i=0 ; i < length ; i++)
    {
        if(shortage > age[i])
        {
            shortage = age[i] ;
        }
    }

    printf("The shortest age is : %d\n",shortage);

    return 0;
}