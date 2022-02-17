#include<stdio.h>
int main(){
    char a[][20]={"varun","ram","shym","suraj"};
    char (*p)[20];
    char *t[]={"varun","ram","shym","suraj"};
    p=a;
    for(int i=0;i<4;i++){{
        printf("\n");
        for(int j=0;j<sizeof(a[i]);j++){
              printf("%c ",*(*(p+i)+j));

        }
      
    }}
    for(int i=0;i<4;i++){{
        printf("\n");
        printf("%s",*(t+i));
    }}
}