#include<stdio.h>
int main(){
    int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int (*ptr)[3];
    ptr=a;
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<3;j++)
        {
            printf("%d-----%d",a[i][j],*(*(ptr+i)+j));
            printf("\n");
        }
    
    }

    

}