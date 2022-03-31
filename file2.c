#include<stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp;
    char ch;
    int c;
    
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","w");
    fputc('C',fp);
    fputc('h',fp);
    printf("\n");
    printf("wrriten successfully");
    fclose(fp);
    fp=fopen("C:\\Users\\varun\\Documents\\fall sem\\advance_c\\cat2\\try.txt","r");
    if ((fp = fopen("try.txt","r")) == NULL)
   {
       printf("Error! opening file");
       exit(1);
   }
      while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   return(0);

}