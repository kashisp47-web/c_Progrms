#include<stdio.h>

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

void main ()
{
    int arr[]={21, 34, 56, 78, 90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=56;

    int i=linearsearch(arr, size, target);
    if(i>0)
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found\n");
    }

}