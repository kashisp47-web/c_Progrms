#include <stdio.h>

void main() {
    int number,count=0,sum=0;
    

    printf("Enter a number: ");
    scanf("%d", &number);
        while (number != 0) {
            int digit=number%10;
            sum+=digit;
            number=number/10;
            count++;   
        }
    printf("Number of digits: %d\n", count);
    printf("Sum of digits:%d",sum);
    
}
