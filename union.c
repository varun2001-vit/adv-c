#include<stdio.h>

union wa
{
    int a;
    char b;

};
int main(){
    union wa x,*p;
    x.a=70;
    p=&x;
    printf("\n");
    printf("a=%d\n",x.a);
    printf("b=%c\n",x.b);
    printf("a=%d\n",p->a);
    printf("b=%c\n",p->b);
}
