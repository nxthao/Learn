#include <stdio.h>
#include <string.h>
/*
Should use if to check which character it is, shouldd not use for
*/

char s[70];
char b[70];


void Display(char *p)
{
	for (int i = 0; *(p+i) != '\0'; i++)
	{
		printf("%c", *(p+i));
	}
	printf("\n");
}

void main()
{
	printf("Input string\n");
	fflush(stdin);
	gets(s);

	for (int i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			b[j] = s[i];
			printf("%c", b[j]);
			j++;
		}
	}
	printf("\n");

	Display(b);
}