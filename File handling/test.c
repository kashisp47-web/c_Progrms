#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("test1.txt","r");
    if(fp==NULL)
    {
        printf("File is not found");
    }
    int rno,m1,m2,m3,tot;
    float per;
    char name[20];
    fscanf(fp,"%d",&rno);
    fscanf(fp,"%s",&name);
    fscanf(fp,"%d",&m1);
    fscanf(fp,"%d",&m2);
    fscanf(fp,"%d",&m3);
    fscanf(fp,"%d",&tot);
    fscanf(fp,"%f",&per);

    printf("%d\n%s\n%d\n%d\n%d\n%d\n%f",rno,name,m1,m2,m3,tot,per);
}