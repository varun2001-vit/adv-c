#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
void sum(int a ,int b)
{
    int c =a+b;
    printf("%d ",c);
}
int jod(int a)
{
    if (a!=0)
    {
        a=a+jod(a-1);
        return a;
    }
    else 
    {
        return a;
    }
}
int main()
{
    int a=10;
    int b=20;
    sum(a,b);
    int c=add(a,b);
    printf("\n");
    printf("sum is %d ",c);
    int d =jod(a);
    printf("\n");
    printf("sum is %d ",d);

    

}