#include<stdio.h>

struct emp {
    int id,salary;
    char name[20];
    char dpart[30];

};
void getinfo(struct emp e[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter a Employee id:");
    scanf("%d",&e[i].id);
    printf("Enter a Employee name:");
    scanf("%s",&e[i].name);
    printf("Enter a Employee department:");
    scanf("%s",&e[i].dpart);
    printf("Enter a Employee salary:");
    scanf("%d",&e[i].salary);
    printf("\n");
    }
    
    
}
void display(struct emp e[],int n)
{
    printf("Employee Details:\n");
    for(int i=0;i<n;i++)
    {
        printf("Employee ID:%d\n",e[i].id);
        printf("Employee Name:%s\n",e[i].name);
        printf("Employee Department:%s\n",e[i].dpart);
        printf("Employee Salary:%d\n",e[i].salary);
        printf("\n");
    }
}
void main()
{
    int n;
    printf("Enter a number of employee:\n");
    scanf("%d",&n);

    struct emp employee[n];
    getinfo(employee,n);
    display(employee,n);
}