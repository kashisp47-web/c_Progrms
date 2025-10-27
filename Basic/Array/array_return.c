#include<stdio.h>
int n;
int max(int a[])
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min(int a[])
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
void main(){
    printf("Enter a numbers:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter a elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("\nMax number:%d",max(a));
    printf("\nMin number:%d",min(a));
}