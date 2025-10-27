#include<stdio.h>
#include<string.h>
void main()
{
    char c[100];
    char c1[20]="Hello world test";
    char c2[20]="Hello";
    char c3[10];

    //concrate two string
    //strcat(c1,c2);
    //printf("%s",c1);

    //copy string
    //strcpy(c3,c1);
    //printf("\n%s",c3);

    //compare two string
    
   int res=strcmp(c1,c2);

   if(res==0)
   {
    printf("\nStrings are equal");
   }
   else
   {
    printf("\nString are not equal");
   }
   

   //convert uppercase 
   strupr(c1);
   printf("\n%s",c1);

   //length of string
   int n=strlen(c2);
   printf("\n%d",n);

   //lowercase string
   printf("\n%s",strlwr(c1));

   //char *c5=strchr(c1,'o');
   //printf("\n%c",c5);

   //copy particular character of string
   //strncpy(c3,c1,3);
   //printf("\n%s",c3);

   //string occurence
   char *c6=strrchr(c1,'h');
   printf("\n%c",c6);

   //multiple occurence
   char *c4=strstr(c1,"nworld");
   if(c4!=NULL)
   {
    printf("\npre");

   }
   else{
    printf("\nNp");
   }

   //int value transfer/formate into string
   int i=10;
   char ch[10];
   sprintf(ch,"%d",i);
   printf("\n%s",ch);
}