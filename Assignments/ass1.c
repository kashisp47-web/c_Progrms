#include<stdio.h>
void main()
{
    int ch, choice;

    do {
        printf("1. Check even or odd\n");
        printf("2. Check positive, negative, or zero\n");
        printf("3. Check if a number is a multiple of 3 and 5\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                int a;
                printf("Enter a number: ");
                scanf("%d", &a);
                if (a % 2 == 0) {
                    printf("%d is even\n", a);
                } else {
                    printf("%d is odd\n", a);
                }
                break;
            }

            case 2: {
                int b;
                printf("Enter a number: ");
                scanf("%d", &b);
                if (b > 0) {
                    printf("%d is positive\n", b);
                } else if (b < 0) {
                    printf("%d is negative\n", b);
                } else {
                    printf("%d is zero\n", b);
                }
                break;
            }

            case 3: {
                int num;
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 3 == 0 && num % 5 == 0) {
                    printf("%d is a multiple of 3 and 5\n", num);
                } else {
                    printf("%d is not a multiple of 3 and 5\n", num);
                }
                break;
            }

            default:
                printf("Invalid choice\n");
                break;
        }

        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);
}

