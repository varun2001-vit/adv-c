#include<stdio.h>
#include<stdarg.h>
float average(int num,...);
float average(int num,...)
{
    float sum=0.0,avg=0.0;
    int i;
    va_list a;
    va_start(a,num);
    for(i=0;i<num;i++)
    sum = sum + va_arg(a,int);
    avg=sum/num;
    return avg;
}
int main()
{
    printf("%f\n",average(2,4,6));
    printf("%f\n",average(3,4,6,7));
    printf("%f\n",average(4,2,3,4,6));
    printf("%f\n",average(5,1,3,2,4,6));
}