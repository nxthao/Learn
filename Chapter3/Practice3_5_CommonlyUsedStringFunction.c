#include <stdio.h>
#include <string.h>
/*
some functions are usually used in string: strlen(), strcpy(), strcmp(), strcat()
*/
char a[] = "abcd";
char b[] = "ABcd";
char c[20];
char d[20];
_Bool result;

void LengthString(char *p)
{
	printf("Length of: ");
	puts(p);
	printf("%d\n", strlen(p));
}

_Bool Compare(char *p1, char *p2)
{
	return strcmp(p1, p2) == 0 ? 1 : 0;
}

void main()
{
	printf("Input c\n");
	fflush(stdin);
	gets(c);
	printf("Input d\n");
	fflush(stdin);
	gets(d);
	LengthString(a);
	LengthString(b);
	LengthString(c);
	LengthString(d);

	result = Compare(a, b);
	printf("Compare string a with b\n");
	if (result == 1)
	{
		printf("They are the same\n");
	}
	else
	{
		printf("They are not the same\n");
	}

	result = Compare(c, d);
	printf("Compare string c with d\n");
	if (result == 1)
	{
		printf("They are the same\n");
	}
	else
	{
		printf("They are not the same\n");
	}

	printf("Copy a to c\n");
	strcpy_s(c, strlen(a) + 1, a);
	puts(c);

	printf("Copy b to d\n");
	strcpy_s(d, strlen(b) + 1, b);
	puts(d);

	printf("Join 2 string\n");
	strcat_s(c, strlen(c) + strlen(d) + 1, d);
	puts(c);
}
