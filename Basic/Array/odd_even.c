#include<stdio.h>

void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers in the array:\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);

        }
        
    }
    printf("\nOdd numbers in the array:\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}