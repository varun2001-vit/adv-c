#include<stdio.h>
#include<errno.h>
#include<error.h>
int main()
{
     FILE *fp;
     char ch;int n;
     fp=fopen("try.txt", "r");
     if(fp==NULL)
      {printf("file cannot be opened");
      }
     else
     {
        printf("Enter value of n  to read last n characters");
        scanf("%d",&n);
        fseek(fp,-n,2);
//       while(feof(fp))
//       {
//            ch=fgetc(fp);
//           printf("%s",ch);
//
//       }
		while((ch=fgetc(fp))!=EOF)
		        {
		            printf("%c",ch);
		        }

      }
      printf("\n");
      printf("%d",(int)ftell(fp));
  fclose(fp);
  
}
