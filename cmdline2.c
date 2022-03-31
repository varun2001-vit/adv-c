#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("the number of arguments in the list is %d\n", argc);
    if(argc < 2)
    {
        printf("Less than one argument");
    }
    else
    {
        for(int i = 1; i < argc; i++)
        {
            printf("%s", argv[i]);
            printf("\n");
        }
    }
}