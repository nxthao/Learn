#include <stdio.h>

FILE *fp;
int count = 0;
char c;

void main()
{
	errno_t err;
	err = fopen_s(&fp, "test.txt", "r+");

	if (err == 0)
	{
		printf("The file is opened\n");
		for (c = getc(fp); c != EOF; c = getc(fp))
		{
			count++;
		}
	}
	else
	{
		printf("The file is unable to open\n");
		exit(0);
	}

	printf("The number of character in the file: %d\n", count);

	fclose(fp);
}