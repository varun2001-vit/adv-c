#include<stdio.h>
struct location{
        char city[30];
        char pin[20];
    };
struct emp{
    char name[20];
    int age;
    struct location loc;
};
int main()
{
 struct emp em;
 
 scanf("%d", &em.age);
 scanf("%s", &em.name);
 scanf("%s", &em.loc.city);
 scanf("%s", &em.loc.pin);
 printf("%d", em.age);
 printf("%s", &em.name);
 printf("%s", &em.loc.city);
 printf("%s", &em.loc.pin);

}