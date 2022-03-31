#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp;
    char ch;
    char b[255];
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","w");
    fprintf(fp, "Advanced C Programming\n");
    printf("\n");
    printf("wrriten successfully");
    fclose(fp);
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","r");
    if ((fp = fopen("try.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }
   while(fscanf(fp, "%s", b)!=EOF)
   printf("%s",b);
   fclose(fp);
   return 0;

}
