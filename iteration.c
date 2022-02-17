#include<stdio.h>
int main()
{
    int a=20;
    int b=10;
    if(a==20) 
    {
        if(b==20)
        {
            printf("\n");
            printf("same hai dono");
        }
        else 
        {
            printf("a same hai b nhi");
        }
    }
    else
    {
        printf("\n");
        printf("a hi alag hai bahi b chood");
    }
    printf("\n");
    switch(a)
    {
       case 10: printf("a is 10");
       break;
       case 20:printf("a is 20");
       break;
       case 30: printf("a is 30");
       break;
       case 40: printf("a is 40");
       break;
       default:printf("not march bro");
    }
}