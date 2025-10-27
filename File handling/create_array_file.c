#include<stdio.h>

void main()
{
    FILE *fp;
    fp=fopen("array.txt", "w");
    //add content.
    int size, i;
    int arr[size];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
     
    for(i=0;i<size;i++)
    {
        fprintf(fp, "%d\n", arr[i]); 
    }

    
    
    fclose(fp);
}