#include <stdio.h>
#include <string.h>
/*
can not use array 1D with pointer to take many trings,
should use array 2D
*/

char a[10][20];

void main()
{
	printf("Input 10 String\n");
	for (int i = 0; i < 10; i++)
	{
		gets(a[i]);
	}

	printf("Sort string as Dictionary\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = i+1; j < 10; j++)
		{
			char tmp[20];
			if (strcmp(a[i], a[j]) > 0)
			{
				strcpy_s(tmp, strlen(a[i]) + 1, a[i]);
				strcpy_s(a[i], strlen(a[j]) + 1, a[j]);
				strcpy_s(a[j], strlen(tmp) + 1, tmp);
			}
		}
	}

	printf("Display the whole string in Dictionary\n");
	for (int i = 0; i < 10; i++)
	{
		puts(a[i]);
	}
}

