#include<stdio.h>
int add(int a,int b)
{
   return a + b;
}
//first way
int addition(int a[],int size)
{
  int sum = 0;
  for(int i=0;i<size;i++)
  {
      sum=sum + a[i];
  }
  return sum;
}
//second way
int jod(int size ,int a[size])
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum=sum + a[i];
    }
    return sum;
}
//third way
int jodna(int *a,int size)
{
     int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum=sum + a[i];
    }
    return sum;
}
int main()
{
    int a,b;
    printf("enter a and b\n");
    int d[5]={1,2,3,4,5};
    scanf("%d",&a);
    scanf("%d",&b);
    int c= add(a,b);
    int sum1,sum2,sum3;
    sum1= addition(d,5);
    sum2=jod(5,d);
    sum3=jodna(d,5);
    printf("the sum of matrix elements in first way %d ,second way %d,third way %d\n",sum1,sum2,sum3);
    printf("\n");
    printf("the sum is %d\n",c);
}