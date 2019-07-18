#include <stdio.h>
/*
Write function to read and write file
*/

FILE* fp;
char* data;
char* data_receive;
char file_name[10] = "test.txt";
errno_t err;

char* InputData()
{
	static char data_tmp[100];
	fflush(stdin);
	printf("Input data\n");
	gets(data_tmp);
	printf("address of data_tmp %p\n", &data_tmp);
	return data_tmp;
}

void WriteFile(char fname[10], char data_write[100])
{
	err = fopen_s(&fp, fname, "w");
	if (err == 0)
	{
		printf("The file is opened\n");
		if (strlen(data_write) > 0)
		{
			fputs(data_write, fp);
			fputs("\n", fp);
		}
	}
	else
	{
		printf("The file is unable to open\n");
	}
	fclose(fp);
}

char* ReadFile(char fname[10])
{
	// To preserve memory we use a keyword " static " which creates a single memory irrespective of the function boundary.
	static char data_read[100];
	err = fopen_s(&fp, fname, "r");
	if (err == 0)
	{
		printf("The file is opened\n");
		fgets(&data_read, 100, fp);
		printf("data: %s\n", data_read);
		printf("address of data_read %p\n", &data_read);
		for (int i = 0; i < 20; i++)
		{
			printf("address of file_name[%d]: %p\n", i, &data_read[i]);
		}
		return data_read;
	}
	else
	{
		printf("The file is unable to open\n");
	}

	fclose(fp);
}

void main()
{
	data = InputData();

	WriteFile(file_name, data);

	data_receive = ReadFile(file_name);
	printf("address of data %p\n", &data);

	printf("address of data_write %p\n", &data_receive);

	printf("address of file_name %p\n", &file_name);
	printf("data of file: %s\n", data_receive);
	printf("data_receive %p\n", data_receive);
	printf("data_receive %p\n", &data_receive);
	for (int i = 0; i < 10; i++)
	{
		printf("address of file_name[%d]: %p\n", i, &file_name[i]);
	}
}
