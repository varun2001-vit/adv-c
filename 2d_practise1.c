#include<stdio.h>
#include<stdlib.h>
int main(){
    int **p;
    int r,c;
    
    printf("enter rows and columns\n");
    scanf("%d",&r);
    scanf("%d",&c);
    p=(int**)malloc(sizeof(int*)*r);
    for(int i=0; i<r; i++)
    {
        *(p+i)=(int *)malloc(sizeof(int)*c);
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    printf("\n");
    int sum=0;
    for(int i=0; i<r; i++)
    {
        printf("\n");
        for(int j=0; j<c; j++)
        {
            sum=sum+*(*(p+i)+j);
        }
    }
    printf("sum is %d\n",sum);

    
    
}