#include<stdio.h>
void main()
{
    FILE * fp;
    fp=fopen("test1.txt","w");
    int rno,m1,m2,m3,tot;
    float per;
    char name[20];
    printf("Enter the roll no:");
    scanf("%d",&rno);
    printf("\nEnter the name:");
    scanf("%s",&name);
    printf("\nEnter the marks 1:");
    scanf("%d",&m1);   
    printf("\nEnter the marks 2:");
    scanf("%d",&m2);   
    printf("\nEnter the marks 3:");
    scanf("%d",&m3); 
    tot=m1+m2+m3;
    printf("\n Total is:%d",tot);
    per=tot/3.0;
    printf("\nPercentage is:%f",per);
    
    fprintf(fp,"%d\n%s\n%d\n%d\n%d\n%d\n%f\n", rno, name, m1, m2, m3, tot, per);

    fclose(fp);
}