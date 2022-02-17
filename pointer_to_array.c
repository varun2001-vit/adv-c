#include<stdio.h>
int main(){
    int a[]={10,11,12,13};
    int *p;
    int *d;
   

    d=&a[0];//same as for p
    p=a;
    int s= sizeof(a)/sizeof(a[0]);//size
    int *f[s];// array of pointers
    for(int i=0;i<s;i++)
    {
        f[i]=&a[i];//assigning
    }
    for(int i=0; i<s;i++)
    {
        printf("value is %d-------%d--------%d\n",*p,*d,*f[i]);
        p=p+1;
        d=d+1;
    }

}