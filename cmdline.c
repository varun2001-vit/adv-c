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
        int a=atoi(argv[1]);
        if(a%2==0) printf("even number");
        else printf("odd number");
        return 0;
    }
}