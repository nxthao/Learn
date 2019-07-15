#include <stdio.h>
/*
Create a test.c before, then copy the contents to another file.
*/

char data_file1[20], data_file2[20];
FILE *fp1, *fp2;

void main()
{
	errno_t err;

	err = fopen_s(&fp1, "test1.c", "r");

	if (err == 0)
	{
		printf("The test1.c is opened\n");
		fgets(data_file1, 20, fp1);
		printf("data in file1 %s\n", data_file1);
	}
	else
	{
		printf("Unable to open the test1.c file\n");
	}
	fclose(fp1);

	// Copy to file2
	err = fopen_s(&fp2, "test2.c", "w");
	if (err == 0)
	{
		printf("The test2.c is opened\n");
		if (strlen(data_file1) > 0)
		{
			fputs(data_file1, fp2);
			fputs("\n", fp2);
		}
	}
	else
	{
		printf("Unable to open the test2.c file\n");
	}

	fclose(fp2);
	// Read data in test2.c file
	err = fopen_s(&fp2, "test2.c", "r");
	if (err == 0)
	{
		fgets(data_file2, 20, fp2);
		printf("data in file2.c: %s\n", data_file2);
	}
	else
	{
		printf("Unable to open the test2.c file\n");
	}
	fclose(fp2);

}