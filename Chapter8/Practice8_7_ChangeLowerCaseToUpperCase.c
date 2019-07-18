#include <stdio.h>
#include <ctype.h>
/*
Change lower case to upper case in a file
*/

FILE *fp;
char data[50];
char c;

void main()
{
   errno_t err;

   // Write file
   err = fopen_s(&fp, "test.txt", "w");

   if (err == 0)
   {
      printf("the file is opened\n");
      fflush(stdin);
      printf("Please enter data for the file\n");
      gets(data);
      if (strlen(data) > 0)
      {
         fputs(data, fp);
         fputs("\n", fp);
      }
   }
   else
   {
      printf("The file is unable to open\n");
   }

   fclose(fp);

   // Read file
   err = fopen_s(&fp, "test.txt", "r");

   if (err == 0)
   {
      printf("The file is opened\n");
      for (c = getc(fp); c != EOF; c = getc(fp))
      {
         c = toupper(c);
         printf("%c", c);
      }
   }
   else
   {
      printf("The file is unable to open\n");
   }
   fclose(fp);
}

