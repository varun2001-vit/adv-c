#include<stdio.h>
#define PRINT(x, str) ({\
   printf("The number %d", x);\
   printf(" is ");\
   printf(#str);\
   printf("\n");\
})
#define greater(x, y)({\
if(x>y)\
printf("%d", x);\
else \
printf("%d", y);\
})
int main() {
   int x = 10;
   if(x % 2 == 0){
      PRINT(x, EVEN);
   }
   greater(10, 100);
}