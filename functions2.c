#include <stdio.h>
int a=20;
void add( int a)
{
    a=a+10;
    printf(" inside :%d",a);
}
void jod( int *a)
{
    *a=*a+10;
    printf(" inside :%d",*a);
}
void change( int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        a[i]=a[i]*2;
    }
}
int main(){
    int a=10;
    add(a);
    printf(" outside:%d",a);
    jod(&a);
    printf(" outside :%d",a);
    int b[]={10,20,30};
    change(b,3);
    printf(" %d",b[0]);
   



}