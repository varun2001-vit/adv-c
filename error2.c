#include <stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<error.h>
int errno;
int main()
{
    FILE *fp;
    fp= fopen("cat2\\try1.txt","r");
    if(fp == NULL)
    {
       fprintf(stderr,"Error:%d",errno);
       printf("\n");
      // printf("Error:%d",errno); this also words
      perror("cat2 error");
      printf("\n");
     fprintf(stderr, "Error opening file: %s\n", strerror(errno));



    }
    else
    {
        printf("successfully");
    }
}