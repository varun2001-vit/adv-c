#include<stdio.h>
struct emp{
    char name[20];
    int age;
    float salary;
    int marks[2];
};
int main(){
    struct emp e1[3];
    struct emp e={"sony",23,23000};
    printf("name:%s",e.name);
    
    for(int i=0;i<2;i++){
         printf("Hello , enter name age salary\n");
    scanf("%s",&e1[i].name);
    scanf("%d",&e1[i].age);
    scanf("%f",&e1[i].salary);
    for(int j=0;j<2;j++){
        printf("enter marks");
        scanf("%d",&e1[i].marks[j]);
    }
    }
    for(int i=0;i<2;i++){
        printf("values are*");
    printf("\n");
    printf("name:%s",e1[i].name);
    printf("\n");
    printf("age:%d",e1[i].age);
    printf("\n");
    printf("salary:%f",e1[i].salary);
     for(int j=0;j<2;j++){
        printf("%d ",e1[i].marks[j]);
    }
    }
    


}