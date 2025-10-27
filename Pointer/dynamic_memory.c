#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    printf("Enter the size:");
    scanf("%d",&n);

    int * ptr=(int*)malloc(n*sizeof(int));
    printf("\nEnter the array element:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("\n%d",ptr[i]);
    }

    free(ptr);
}