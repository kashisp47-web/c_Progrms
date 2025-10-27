#include<stdio.h>

int add(int *a,int *b){
    int sum=*a+*b;
    return sum;
}
int mul(int *a,int *b)
{
    int sum=*a * *b;
    return sum;
}
int sub(int *a,int *b){
    int sum=*a - *b;
    return sum;
}
int div(int *a,int *b)
{
    int sum=*a/ *b;
    return sum;
}
void main()
{
    int a=20,b=10;
    int ans=add(&a,&b);
    int res=mul(&a,&b);
    int calc=sub(&a,&b);
    int i=div(&a,&b);

    printf("%d\n",ans);
    printf("%d\n",res);
    printf("%d\n",calc);
    printf("%d\n",i);
}