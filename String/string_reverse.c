#include<stdio.h>

// Function to calculate the length of the string
int stringLength(char str[])
{
    int length=0;
    while (str[length]!=NULL)
    {
        length++;
    }
    return length;
}
// Function to reverse the string
void StringReverse(char str[])
{
    int length=stringLength(str);
    int start=0,end=length-1;
    char temp;

    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
}

void  main() {
    char str[100];
    printf("\nEnter a string:");
    gets(str);

    StringReverse(str);

    printf("\nReversed string is:%s",str);

}