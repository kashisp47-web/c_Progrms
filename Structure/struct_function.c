#include<stdio.h>
struct Student getinfo();
struct Student{
        int id;
        char name[20];
};
struct Student getinfo()
{
    struct Student st;
    printf("Enter a id and name:");
    scanf("%d %s",&st.id,&st.name);

    return st;
}
void main()
{
    struct Student s;
    s=getinfo();
    printf("%d %s",s.id,s.name);
}