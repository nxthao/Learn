#include <stdio.h>
/*
Find the size of the file
*/

FILE *fp;
errno_t err;
int size;
char *data;
char *data_file;
char filename[] = "test.txt";

char *InputData()
{
   static char data_tmp[100];
   printf("Please input data\n");
   fflush(stdin);
   gets(data_tmp);
   return data_tmp;
}

char WriteFile(char f_name[100], char data[100])
{
   err = fopen_s(&fp, f_name, "w");
   if (err == 0)
   {
      if (strlen(data) > 0)
      {
         printf("The file is opened\n");
         fputs(data, fp);
         fputs("\n", fp);
		 printf("data write %s \n", data);
      }
   }
   else
   {
      printf("The file is unable to open\n");
   }
   fclose(fp);
}

char *ReadFile(char filename[10])
{
   static char data_read[100];
   err = fopen_s(&fp, filename, "r");
   if (err == 0)
   {
      printf("The file is opened\n");
      fgets(&data_read, 100, fp);
      printf("data read: %s\n", data_read);
   }
   else
   {
      printf("The file is unable to open\n");
   }
   fclose(fp);
   return data_read;
}

int findSize(char f_name[10])
{
   int res;  
   err = fopen_s(&fp, f_name, "r");
   if (err == 0)
   {     
      printf("The file is opened\n");
      // Point to the end of the file
      fseek(fp, 0, SEEK_END);
      // Find size of file with ftell
      res = ftell(fp);
   }
   else
   {
      printf("The file is unable to open\n");
   }
   return res;
   fclose(fp);
}

void main()
{
   data = InputData();

   WriteFile(filename, data);

   data_file = ReadFile(filename, data_file);
   printf("data of file: %s\n", data_file);

   size = findSize(filename);
   printf("The size of the file: %d\n", (size-2));
}
