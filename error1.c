#include <stdio.h>
#include <errno.h>
#include<error.h>
#include <string.h>
int errno;
int main () {
   FILE * pf;
   int errnum;
   pf = fopen ("file3.txt", "r");
   if (pf == NULL) {
      errnum = errno;
      fprintf(stderr, "Value of errno: %d\n", errno);
      perror("Error printed by perror");
      fprintf(stderr, "Error opening file: %s\n", strerror( errnum ));
   } else {
     fclose (pf);
   }
}
