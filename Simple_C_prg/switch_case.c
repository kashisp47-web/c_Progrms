#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b); 
    char ch,ch1;

    printf("Enter your choice (+, -, *, /):\n");
    scanf(" %c", &ch); // Added a space before %c to handle newline character

    switch(ch)
    {
        case '+':
            printf("Addition is %d\n", a + b);
            break;

        case '-':
            printf("Subtraction is %d\n", a - b);
            break;

        case '*':
            printf("Multiplication is %d\n", a * b);
            break;

        case '/':
            if (b != 0) // Added check to avoid division by zero
                printf("Division is %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        default:
            printf("Invalid character\n");
            break;
    }
    while(ch1=='y' || ch1=='Y')
    {
        printf("Do you want to continue?\n");
        scanf("%c",&ch1);
    }

    return 0;
}