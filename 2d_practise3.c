#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *n;
    char *temp;
    printf("Enter number of words:\n");
    n=(int*)malloc(sizeof(int));
    scanf("%d", n);
    char **ar;
    int i ;
    ar=(char**)malloc(*n*sizeof(char*));
    printf("Enter words:\n");
    for( i=0;i<*n;i++)
    {
        *(ar+i)=(char *)malloc(sizeof(char)*2);
        scanf("%s", *(ar+i));
    }
    printf("The words before sorting:\n");
    for( i=0;i<*n;i++)
    {
        printf("%s\n", *(ar+i));
    }
    for(int i=0;i<*n;i++)
    {
        for(int j=i+1;j<*n;j++)
        {
            if(strcmp(*(ar+i),*(ar+j))>0)
            {
                temp=*(ar+i);
                *(ar+i)=*(ar+j);
                *(ar+j)=temp;
            }
        }

    }
    printf("The words after sorting:\n");
    for( i=0;i<*n;i++)
    {
        printf("%s\n", *(ar+i));
    }

    return 0;
}