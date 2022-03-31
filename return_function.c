#include<stdio.h>
//just like passing we are returning
int* add (int *a,int size)
{
   for(int i =0;i<size;i++)
   {
       a[i]=a[i]*2;
   }
   return a;
}
int main ()
{
    int a[5]={1,2,3,4,5};
    int *b;
    int size= sizeof(a)/sizeof(int);
    printf("***array after modification****");
    b=add(a,size);
    for(int i=0;i<size;i++)
    {
        printf("%d",b[i]);
        printf("\n");
    }


}