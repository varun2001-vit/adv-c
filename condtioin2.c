#include<stdio.h>
#define max 20
#undef max

int main()
{
    #if 5>6
    printf("lawde");
    #else
    printf("law");
    #endif
    #ifdef max
    printf("max defined");
    #else
    printf("max  not defined"); 
    #endif
}