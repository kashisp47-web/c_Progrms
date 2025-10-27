#include<stdio.h>
void test(int a, int b)
{
    printf("Addition is %d\n", a + b);
    printf("Subtraction is %d\n", a - b);
    printf("Multiplication is %d\n", a * b);
    printf("Division is %d\n", a / b);
}
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    test(a, b);
}