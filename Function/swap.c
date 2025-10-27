#include<stdio.h>
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a=%d, b=%d\n", a, b);
}

void main() 
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    swap(a, b);
    
}