#include <stdio.h>
#include <string.h>
/*
Open a existed file, then read and close file
Note: The data variable should be array
*/
FILE *fp;
char data[40]; // data is read

void main()
{
   errno_t err;
   err = fopen_s(&fp, "test.c", "r");

   if (err == 0)
   {
      printf("The file is opened\n");
	  fgets(data, 20, fp);
      printf("Data is: %s\n", data);
   }
   err = fclose(fp);
   if (err == 0)
   {
      printf("The file is closed\n");
   }
   else
   {
      printf("The file can not close\n");
   }
}