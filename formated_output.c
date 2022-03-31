#include<stdio.h>
int main(){
    printf("the number in integer:%d\n",25);
    printf("the number in char:%c\n",75);
    printf("the number in integer:04%d\n",25);
    printf("the number in octal:%o\n",25);
    printf("the number in float:%f\n",25444.123456789f);
    printf("the number in formatted float:%.2f\n",25444.123456789f);
    printf("the number in formatted float:%3.2f\n",25444.123456789f);
    printf("the number in unsigned integer:%i\n",-25);
    printf("Just print the percentage sign %%\n", 10);
    printf(":%s:\n","Hello, world!");
	printf(":%15s:\n","Hello, world!");
	printf(":%.10s:\n","Hello, world!");
	printf(":%-10s:\n","Hello, world!");
	printf(":%-15s:\n","Hello, world!");
	printf(":%.15s:\n","Hello, world!");
	printf(":%15.10s:\n","Hello, world!");
	printf(":%-15.10s:\n","Hello, world!");
    int a,b;
	float c,d;

		a = 15;
		b = a / 2;
		printf("%d\n",b);
		printf("%013d\n",19);
		printf("%013d\n",b);

		c = 15.3;
		d = c / 3;
		printf("%013.3f\n",d);




}