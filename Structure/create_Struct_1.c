#include<stdio.h>
struct Stud
{
    /* data */
    int id;
    char *name;
};
void main()
{
    struct Stud s1={45,"Dhruv"};
    struct Stud s2={57,"test"};

    printf("s1 is %d %s",s1.id,s1.name);
    printf("\ns2 is %d %s",s2.id, s2.name);
    
}
