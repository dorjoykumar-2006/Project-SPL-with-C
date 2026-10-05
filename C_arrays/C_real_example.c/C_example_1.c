// Example 1 : find average of ages

#include<stdio.h>
int main()
{
    int sum=0;
    int age[] = {20 ,21 ,22 ,23 ,24 ,27 ,30};

    int length = sizeof(age)/sizeof(age[0]);
    
    printf("Total ages : %d\n",length);

    for(int i=0 ; i < length ; i++)
    {
        sum += age[i] ;
        printf("The value is now : %d\n",sum);   
    }

    float avg = (float) sum / length ; 

    printf("The average of ages : %.2f",avg);

    return 0;
}