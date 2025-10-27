#include<stdio.h>
void main()
{
    int row,column,i,j;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d",&row,&column);
    int a[row][column];
    printf("Enter a 2-D array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    printf("The 2-D array is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}