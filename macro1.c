#include<stdio.h>
#define PI 3.14
#define area(r)3.14*r*r
int main(){
    int a=2;
    printf("area of circle:%0.2f",a*a*PI);
    //area using macro
    printf("\n");
    printf("the area of circle is: %0.2f\n",area(1));
    printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Timestamp :%s\n", __TIMESTAMP__ );
   printf("STDC :%d\n", __STDC__ );
   printf("STDC version :%d\n", __STDC_VERSION__ );
   printf("Line :%d\n", __LINE__ );
}