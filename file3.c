#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp;
    char ch;
    int c;
    
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","w");
    fputs("hut chutiya ",fp);
    fputs("shobhit",fp);
    printf("\n");
    printf("wrriten successfully");
    fclose(fp);
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","r");
    if ((fp = fopen("try.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }
   char txt[300];
   fgets(txt,300,fp);
   printf("\n");
   printf("%s\n",txt);
   return(0);

}