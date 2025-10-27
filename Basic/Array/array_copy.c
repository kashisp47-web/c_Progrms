#include<stdio.h>

void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int original[size], copy[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &original[i]);

    }
    for(int i=0;i<size;i++)
    {
        copy[i]=original[i];
    }
    printf("Elements of the copied array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",copy[i]);
    }

}
