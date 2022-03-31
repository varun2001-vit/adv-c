#include <stdio.h>
#define A 40
#define B 20
int main()
{
#if A==B
 printf("A & B");
#elif A>B
 printf("A");
#else
 printf("B");
#endif
return 0;
}

