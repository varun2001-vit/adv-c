#include<stdio.h>
int add(int a,int b)
{
   return a + b;
}
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int c= add(a,b);
    printf("\n");
    printf("the sum is %d\n",c);
}