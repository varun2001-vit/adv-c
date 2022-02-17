#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **p,r,c;
     printf("enter rows and columns\n");
    scanf("%d",&r);
    scanf("%d",&c);
    p=(int **)malloc(sizeof(int *)*r);
    printf("enter elements\n");
    for(int i=0;i<r;i++)
    {
        p[i]=(int *)malloc(sizeof(int)*c);
    }
     for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    int max=**p;
    int min=**p;
    printf("\n");//manupulation part
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
              if(*(*(p+i)+j)>max)
              {
                  max=*(*(p+i)+j);
              }
              if(*(*(p+i)+j)<min)
              {
                  min=*(*(p+i)+j);
              }
        }
    }
    printf("\n");
    printf("Maximum is %d\n",max);
    printf("minmum is %d\n",min);
}