#include<stdio.h>
int main(){
    printf("hello world\n");
    char a;
    int b;
    char c[100];
    float d;
    double e;
    printf("enter char,int,string,float,double");
    printf("\n");
    scanf("%c",&a);
    scanf("%d",&b);
    scanf("%s",&c);
    scanf("%f",&d);
    scanf("%d",&e);
    

    
    printf("values are %c %d %s %f %d",a,b,c,d,e);
}
