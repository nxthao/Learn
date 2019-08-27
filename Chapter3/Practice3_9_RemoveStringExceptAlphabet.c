#include <stdio.h>
#include <string.h>

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

	for (int i = 0; (s[i] >= 'A' && s[i] <= 'Z') || s[i] != '\0'; i++)
	{
		printf("%c\n", s[i]);
		b[i] = s[i];
		// (s[i] >= 'A' && s[i] <= 'Z') && 
	}

	Display(b);
}
