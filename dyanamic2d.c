#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r,c,i,j,**p;
    printf("enter the rows and columns");
    scanf("%d%d",&r,&c);
    
    p=(int **)malloc(sizeof(int *)*r);
    for(i=0;i<r;i++)
    {
       p[i]=(int *)malloc(sizeof(int)*c);
    }
    printf("enter the elements");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          scanf("%d",(*(p+i)+j));
        }
    }
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          if(i==j || i+j==r-1)
          {
              sum=sum+*(*(p+i)+j);
          }
        }
    }
    
for(i=0;i<r;i++)
{
    printf("\n");
    {
        for(j=0;j<c;j++)
        {
          printf("%d",*(*(p+i)+j));
        }
    

    }
    
}
printf("\n");
printf("%d",sum);
    free(p);
    return 0;

}