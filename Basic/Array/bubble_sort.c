#include<stdio.h>
void main()
{
    int size,i;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    for(i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
       printf("%d ",a[i]);                                                                                 
   }
}
