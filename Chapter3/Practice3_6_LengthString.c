#include <stdio.h>

char a[20];
int l = 0;

int LengthString(char *p)
{
	int i = 0;
	while (*p != '\0')
	{
		i++;
		printf("%c\n", *p);
		p++;
	}
	return i;
}

void main()
{
	printf("Please input string\n");
	fflush(stdin);
	gets(a);
	l = LengthString(a);
	printf("Length of string: %d\n", l);
}