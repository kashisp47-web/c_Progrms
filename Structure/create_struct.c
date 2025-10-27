#include<stdio.h>
#include<string.h>
struct stud
{
    /* data */
    int id;
    float f;
    char *d1;
    char c1[20];
};

void main()
{
    struct stud c;
    struct stud s1;
    
    c.id=10;
    c.f=10.0;
    s1.id=20;
    s1.f=20.00;
    strcpy(c.c1,"test");
    s1.d1="test1";
    printf("\nThe id is %d \n%d \n%s",c.id,s1.id,c.c1);
    printf("\nThe float is %f \n%f \n%s",c.f,s1.f,s1.d1);
    
}