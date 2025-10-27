#include<stdio.h>

int linerarsearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; 
        }
    }
    return -1; 
}

void main()
{
    int size,element;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &element);
    int i=linerarsearch(arr, size, element);
    if(i>=0)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found\n");
    }
}