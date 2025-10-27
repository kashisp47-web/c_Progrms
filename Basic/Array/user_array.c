#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    double a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter a elements:\n");
        scanf("%lf",&a[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    {
        printf("%lf\n",a[i]);
    }
}