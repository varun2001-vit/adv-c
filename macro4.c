#include<stdio.h>
#define STR_CONCAT(x, y) x##y 
#define message(a,b) printf(#a" and "#b" are best freinds");
int main(){
    message(varun,aram);
    printf("\n");
    printf("%d", STR_CONCAT(20, 50)); 
}
//second type function

