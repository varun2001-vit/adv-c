#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n;
    printf("enter n");
    scanf("%d",&n);
    p=(int *)malloc((n)*sizeof(int));
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){ 
        printf("\n");
        printf("%d",*(p+i));
    }
    free(p);
}