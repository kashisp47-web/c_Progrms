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
    int a[]={20,25,69,57,48,87};
    array_function(a,6);
    printf("\n");
    
    
}