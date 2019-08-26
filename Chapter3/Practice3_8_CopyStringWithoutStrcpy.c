#include <stdio.h>
#include <string.h>
/*
Copy the string without using strcpy
*/

char a[20];
char b[20];

void Display(char *p)
{
	printf("Print the string\n");
	for (int i = 0; *(p + i) != '\0'; i++)
	{
		printf("%c", *(p + i));
	}
	printf(" \n");
}

void main()
{
	printf("Input the string\n");
	fflush(stdin);
	gets(a);

	for (int i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}

	Display(b);
}