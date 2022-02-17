#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n;
    printf("Enter number of words:\n");
    n=(int*)malloc(sizeof(int));
    scanf("%d", n);
    char **ar;
    ar=(char**)malloc(*n*sizeof(char*));
    printf("Enter words:\n");
    for(int i=0;i<*n;i++)
    {
        *(ar+i)=(char *)malloc(sizeof(char));
        scanf("%s", *(ar+i));
    }
    printf("The words:\n");
    for(int i=0;i<*n;i++)
    {
        printf("%s\n", *(ar+i));
    }
    return 0;
}