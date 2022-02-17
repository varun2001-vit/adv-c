#include<stdio.h>
#include<stdlib.h>
int main(){
    int **a;
    a=(int **)malloc(sizeof(int *)*2);//no of rows and size is of int *that is another pointer array
    for(int i=0;i<2;i++)
    {
        a[i]=(int*)malloc(2*sizeof(int));//size or no of columns that size of datatype*total
    }
    printf("enter \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",(*(a+i)+j));//input
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("\n");
        for(int j=0;j<2;j++)
        {
          printf("%d",*(*(a+i)+j));
        }
    }
}