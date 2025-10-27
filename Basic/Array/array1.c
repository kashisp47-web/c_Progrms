#include<stdio.h>
void main()
{
    int size,i;
   
    printf("Enter size of Array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        printf("\nThe array value is:%d",arr[i]);
    }
}