#include<stdio.h>

int add()
{
    int a,b;
    printf("Enter a two numbers:\n");
    scanf("%d %d",&a,&b);
    
    return a+b;
}
int sub()
{
    int a,b;
    printf("Enter a two numbers:\n");
    scanf("%d %d",&a,&b);
    
    return a-b;
}
int mul()
{
    int a,b;
    printf("Enter a two numbers:\n");
    scanf("%d %d",&a,&b);
    
    return a*b;
}
int div()
{
    float a,b;
    printf("Enter a two numbers:\n");
    scanf("%d %d",&a,&b);
    
    return a/b;
}


void main()
{
    printf("%d\n",add());
    printf("%d\n",sub());
    printf("%d\n",mul());
    printf("%d\n",div());
}
