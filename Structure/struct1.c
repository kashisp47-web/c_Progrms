#include<stdio.h>

struct struct1 {
    int id;
    float f;
}s1, s2;

void main() {
    printf("Enter an id and a float for S1:");
    scanf("%d",&s1.id);
    scanf("%f",&s1.f);

    printf("Enter an id and a float for S2:");
    scanf("%d",&s2.id);
    scanf("%f",&s2.f);

    printf("\nS1 values are %d and %.2f", s1.id, s1.f);
    printf("\nS2 values are %d and %.2f", s2.id, s2.f);
}
