#include<stdio.h>  
#include<error.h>
#include<math.h>
#define A 20
#ifndef A 
#error First include then compile  
#else  
void main(){  
    float a;  
    a=sqrt(7);  
    printf("%f",a);  
}  
#endif