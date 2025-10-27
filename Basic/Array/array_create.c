#include<stdio.h>


void main()
{
    int a[]={20,25,69,57,48,87};
    for(int i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

    int b[5];
    b[0]=20;
    b[1]=25;    
    b[2]=69;
    b[3]=57;
    b[4]=48;
    
    for(int i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
}