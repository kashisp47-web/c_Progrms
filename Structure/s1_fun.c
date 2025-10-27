#include<stdio.h>
struct stud{
    int id;
};
void disp(struct stud s1);
void main()
{
    struct stud s1;
    s1.id=12;
    disp(s1);
}
void disp(struct stud s1)
{
    printf("%d",s1.id);
}
