#include <stdio.h>

FILE *fp;
char c;
int count = 0;

void main()
{
	errno_t err;
	err = fopen_s(&fp, "test.txt", "r");

	if (err != 0)
	{
		printf("The file is unable to open\n");
	}
	else
	{
		printf("The file is opened\n");

		for (c = getc(fp); c != EOF; c = getc(fp))
		{
			if (c == '\n')
			{
				count++;
			}
		}
	}
	printf("The total line of the file is: %d\n", count);
	fclose(fp);
}