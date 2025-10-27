#include<stdio.h>
void main()
{
   FILE *fp;
   fp=fopen("test.txt","r");
   if(fp==NULL)
   {
    printf("File is not found");
   } 
   int i;
   fscanf(fp,"%d",&i);
   printf("The number is:%d",i);

   fclose(fp);
}