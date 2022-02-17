#include<stdio.h>
int main(){
    // char a[20];
    // scanf("%s",&a );
    // printf("%s",a);
    char a[3][20];
    int i=0;
    for(i=0;i<3;i++){
    scanf("%s",&a[i]);\
    }
    for(int j=2;j>=0;j--){
        printf("%s\n",a[j]);
}

}
