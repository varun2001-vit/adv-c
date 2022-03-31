#include<stdio.h>
struct student
{
    char name[30];
    char reg[30];
};

void output(struct student s)  //void output(struct student *s) passing addresss
{
    printf("the name of the student\n");
    printf("%s",s.name);
    printf("\n");
    printf("the reg number of the student\n");
    printf("%s",s.reg);
}
int main()
{
    struct student s;
    printf("enter the name of the student\n");
    scanf("%s",&s.name);
    printf("\n");
    printf("Enter the reg number of the student\n");
    scanf("%s",&s.reg);
    output(s);//output(&s) for adresss
}