#include <stdio.h>

 inline int addition(int a, int b)
{
return a + b ;
}

int main()
{
int a, b, x ;
printf( " Enter the value of integer a  and b:") ;
scanf( "%d%d", &a ,&b ) ;
x = addition(a,b);
printf( "The result a + b : %d\n ",x) ;
return 0 ;
}
