#include <stdio.h>

char a, b;
char InputCharacter()
{
	static char tmp;
	printf("Please input the character\n");
	tmp = getchar();
	return tmp;
}

void CheckAlphabet(char c)
{
	printf("Check whether the string is an alphabet or not\n");
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		printf("The character %c is an alphabet\n", c);
	}
	else
	{
		printf("The character %c is not an alphabet\n", c);
	}
}

void main()
{
next:
	a = InputCharacter();
	CheckAlphabet(a);
	while (getchar() != '\n');
	printf("Do you continue checking? Y/y or enter\n");
	b = getchar();
	if (toupper(b) == 'Y')
	{
		while (getchar() != '\n');
		goto next;
	}
	else if (b == '\n')
	{
		goto next;
	}
	else
	{
		printf("See you again!\n");
	}
}