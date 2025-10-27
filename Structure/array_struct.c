#include<stdio.h>
struct array_struct
{
    /* data */
    int id;
    float f;
}s1[3];

void main()
{
    printf("Enter an id and float:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s1[i].id);
        scanf("%f",&s1[i].f);
    }

    printf("The values of id and float\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n%.2f\n",s1[i].id,s1[i].f);
    }
}
