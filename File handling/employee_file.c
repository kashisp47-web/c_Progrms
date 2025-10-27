#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("employee.txt", "w");
    //add content.  
    int id,salary,n;
    char name[20],date[20];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the employee id: ");
        scanf("%d", &id);
        printf("Enter the employee name: ");
        scanf("%s", &name);
        printf("Enter the employee date of joining: ");
        scanf("%s", &date);
        printf("Enter the employee salary: ");
        scanf("%d", &salary);
        fprintf(fp, "\n%d \n%s \n%s \n%d", id, name, date, salary);
    }
    
    fclose(fp);

}