#include<stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    printf("address  of variable is %x\n",p);
    printf("value is %d\n",*p);
    printf("address of pointer %x",&p);
}