#include<stdio.h>

void main()
{
    FILE *fp;
    fp=fopen("employee.txt", "r");
    //read content.
    int id,salary,n;
    char name[20],date[20];
    
    if(fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fscanf(fp, "%d", &n);
    for(int i=0;i<n;i++)
    {
        fscanf(fp, "%d", &id);
        fscanf(fp, "%s", &name);
        fscanf(fp, "%s", &date);
        fscanf(fp, "%d", &salary);
        printf("\n%d \n%s \n%s \n%d", id, name, date, salary);  
    }
    
    fclose(fp);
}