#include<stdio.h>
struct Student
{
    /* data */
    int id;
    double d;
}s1;

struct address
{
    /* data */
    char city[50];
    struct Student addr;
}s2;

void main()
{
    printf("Enter the id:");
    scanf("%d",&s2.addr.id);
    printf("\nEnter the double:");
    scanf("%lf",&s2.addr.d);
    printf("\nEnter a city:");
    scanf("%s",&s2.city);

    printf("%d\n%.2lf\n%s",s2.addr.id,s2.addr.d,s2.city);
}