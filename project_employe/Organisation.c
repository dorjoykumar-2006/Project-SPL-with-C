#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    struct employee
    {
        char name[50];
        int age;
        float salary;
        char id[10];
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
        scanf("%s",emp[i].id);
        printf("Blood Group: ");
        scanf("%s",emp[i].blood_group);
       
    
    }

    printf("\nEnter name or ID of the employee for enquiry: ");

    char search_name[50]; 
    scanf("%s",search_name);

    for(int j=0;j<n;j++)
    {
        if(strcmp(emp[j].name,search_name)==0 || strcmp(emp[j].id,search_name)==0)
        {
            printf("\nDetails of the employee - \n\n");
            printf("\t1. ID : %s\n",emp[j].id);
            printf("\t2. Name : %s\n",emp[j].name);
            printf("\t3. Age : %d\n",emp[j].age);
            printf("\t4. Salary : %.2f\n",emp[j].salary);
            printf("\t5. Blood Group : %s\n\n",emp[j].blood_group);
            return 0;
        }
    }

    return 0;

}