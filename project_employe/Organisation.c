#include<stdio.h>
#include<string.h>
int main()
{
    struct employee
    {
        char name[50];
        int age;
        float salary;
        int id;
        char blood_group[3];
      
    };

    int n;

    printf("Enter the number of employees: ");
    scanf("%d",&n);

    struct employee emp[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d:\n",i+1);
        printf("Name: ");
        scanf("%s",emp[i].name);
        printf("Age: ");
        scanf("%d",&emp[i].age);
        printf("Salary: ");
        scanf("%f",&emp[i].salary);
        printf("ID: ");
        scanf("%d",&emp[i].id);
        printf("Blood Group: ");
        scanf("%s",emp[i].blood_group);
    }

    printf("\nEnter name or ID of the employee for enquiry: ");

    char search_name[50]; 
    scanf("%s",search_name);

    //int search_id;
    //scanf("%d",&search_id);

    for(int i=0;i<n;i++)
    {
        if(strcmp(emp[i].name,search_name)==0)
        {
            printf("\nDetails of the employee - \n");
             printf("ID: %d\n",emp[i].id);
            printf("Name : %s\n",emp[i].name);
            printf("Age: %d\n",emp[i].age);
            printf("Salary: %.2f\n",emp[i].salary);
            printf("Blood Group: %s\n\n",emp[i].blood_group);
            return 0;
        }
    }

    return 0;

}