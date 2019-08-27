#include <stdio.h>
#include <ctype.h>

char a;
_Bool result; //result = 0: Consonant; result = 1: Vowel

char InputCharacter()
{
	char p;
	printf("Please input character\n");
	p = getchar();
	return p;
}

_Bool CheckVowelConsonant(char p)
{
	printf("Check %c is vowel or consonant\n", p);
	tolower(p) == 'u' || tolower(p) == 'e' || tolower(p) == 'o' || tolower(p) == 'a' || tolower(p) == 'i' ? 1 : 0;
}

void main()
{
	a = InputCharacter();

	//Check Character is Vowel or consonant
	result = CheckVowelConsonant(a);

	if (result == 0)
	{
		printf("The character %c is consonant\n", a);
	}
	else
	{
		printf("The character %c is vowel\n", a);
	}
}