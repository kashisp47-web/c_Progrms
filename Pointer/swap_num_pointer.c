#include<stdio.h>
void swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
void main()
{
    int a=30,b=10;
    printf("Before swapping the number a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping the number a=%d,b=%d",a,b);
}