#include <stdio.h>
/*
'\n' is newline with ASCII: 10, '\r' is enter with ASCII: 13
*/

char a;
char b, c[20];
char InputCharacter()
{
	static char tmp;
	printf("Please input the character\n");
	tmp = getchar();
	return tmp;
}

void DisplayASCII(char tmp)
{
	printf("ASCII code of the character %c is %d\n", tmp, tmp);
	printf("Hexa code of the character %c is %x\n", tmp, tmp);
}

void main()
{
next:
	a = InputCharacter();
	DisplayASCII(a);

	// Clean stdin
	while (getchar() != '\n');
	printf("Do you continue searching? Y/y or enter\n");
	b = getchar();
	if (toupper(b) == 'Y')
	{
		// Need to clear stdin
		while (getchar() != '\n');
		goto next;
	}
	// Take the enter keyboard
	else if (b == '\n')
	{
		// Don't need to clear stdin, because I take the last character in stdin
		goto next;
	}
	else
	{
		printf("the ascii code of b is %x\n", b);
		printf("See you again\n");
	}
}
