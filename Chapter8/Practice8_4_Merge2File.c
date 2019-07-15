#include <stdio.h>
#include <string.h>
/*
Merge file1 and file2 to file3
Note: I need to create file1 and file2
*/

FILE *fp1, *fp2, *fp3;
char c;

void main()
{
   errno_t err1, err2, err3;

   err1 = fopen_s(&fp1, "test1.txt", "r");
   err2 = fopen_s(&fp2, "test2.txt", "r");
   err3 = fopen_s(&fp3, "test3.txt", "w");

   if (err1 > 0 | err2 > 0 | err3 > 0)
   {
      printf("One of the these files unable to open\n");
      exit(0);
   }

   while ((c = getc(fp1)) != EOF)
   {
      fputc(c, fp3);
   }

   while ((c = getc(fp2)) != EOF)
   {
      fputc(c, fp3);
   }

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
}
