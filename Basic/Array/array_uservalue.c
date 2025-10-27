#include<stdio.h>
void array_function(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter a elements:");
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("\nArray is:");
    array_function(a, n);  
}