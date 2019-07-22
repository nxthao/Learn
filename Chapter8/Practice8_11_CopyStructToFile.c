#include <stdio.h>
/*
Read and write data from struct when working on the file
*/

FILE* fp;
errno_t err;
char* filename = "test.txt";

typedef struct
{
	int id;
	char name[20];
}student;


student InputData()
{
	student tmp;
	printf("Please input data\n");

	printf("Input id:");
	scanf_s("%d%*c", &tmp.id);

	printf("Input the name:\n");
	fflush(stdin);

	gets(tmp.name);
	return tmp;
}


void WriteData(char fname[20], student data_tmp)
{
	err = fopen_s(&fp, fname, "w");
	if (err == 0)
	{
		printf("The file is opened\n");
		fwrite(&data_tmp, sizeof(student), 1, fp);
	}
	else
	{
		printf("The file is unable to open");
	}

	if (fwrite != 0)
	{
		printf("contents to file written successfully !\n");
	}
	else
	{
		printf("error writing file !\n");
	}
	fclose(fp);
}

student ReadFile(char fname[20])
{
	student tmp;
	err = fopen_s(&fp, fname, "r");
	if (err == 0)
	{
		printf("The file is opened\n");
		while (fread(&tmp, sizeof(student), 1, fp))
		{
			printf("id = %d, name = %s\n", tmp.id, tmp.name);
		}
		return tmp;
	}
	else
	{
		printf("The file is unable to open\n");
	}
	fclose(fp);
}


void main()
{
	student A;
	student B;

	A = InputData();

	WriteData(filename, A);

	B = ReadFile(filename);

	printf("id = %d, name = %s\n", B.id, B.name);
}