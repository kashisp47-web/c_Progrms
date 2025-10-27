#include<stdio.h>
int rev(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Reverse is %d\n",rev(n));
}