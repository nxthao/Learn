#include <stdio.h>
#include <string.h>
/*
Open the file, then write something into the file. finally, close this file
*/

FILE *fp;
char *data = "Hello Thao Nguyen";

void main()
{
   errno_t err;
   err = fopen_s(&fp, "test.c", "w");

   // Will have error if err > 0
   if (err != 0 )
   {
      printf("File can not open\n");
   }
   else
   {
      printf("File is opened\n");
      if (strlen(data) > 0)
      {
         printf("Write data to file\n");
         fputs(data, fp);
         fputs("\n", fp);
      }
   }
   err = fclose(fp);
   if (err == 0)
   {
      printf("The file is closed\n");
   }
   else
   {
      printf("The file is not closed\n");
   }
}