#include<stdio.h>
int max(int n)
{
    int max=0;
    for(int i=1;i<=10;i++)
    {
        if(i>max)
            max=i;
    }
    return max;
}
void main()
{
    int n=10;
    printf("Maximum is %d\n",max(n));
}