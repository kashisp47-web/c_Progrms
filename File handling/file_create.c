// create the file.
#include<stdio.h>

void main()
{
    FILE * fp;
    fp=fopen("test.txt", "w");
    //add content.
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    fprintf(fp, "%d", i);
    fclose(fp);
} 