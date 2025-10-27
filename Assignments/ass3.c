#include<stdio.h>

int main() {
    int marks, grade;

    // Input the marks
    printf("Enter the marks of the student (0-100): ");
    scanf("%d", &marks);

    // Check if marks are valid
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        return 0;
    }

    // Determine the grade category
    grade = marks / 10; // Divide marks by 10 to group them into ranges

    // Use switch to determine the grade
    switch (grade) {
        case 10: // For marks 100
        case 9:
            printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }

    return 0;
}