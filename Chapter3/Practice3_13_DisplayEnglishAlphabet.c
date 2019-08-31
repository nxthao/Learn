#include <stdio.h>
#include <ctype.h>
/*
puts and printf("%s"): it will print the string from the first address of string,
if it meet '\0' or '\n' ??? it will not print anything.
*/

char a;
_Bool result;

char *ConvertToUppercase(char *p);

_Bool LowercaseOrUppercase()
{
	char tmp1[20];
	char *tmp2;
	// while(getchar() != '\n'); // clear stdin
	printf("Do you display lowercase or uppercase\n");
	gets(tmp1);

	tmp2 = ConvertToUppercase(tmp1);
	if (strcmp(tmp2, "uppercase") == 0)
	{
		return 1;
	}
	if (strcmp(tmp2, "lowercase") == 0)
	{
		return 0;
	}
}

char* ConvertToUppercase(char* p)
{
	static char tmp[20];
	for (int i = 0; *(p + i) != '\0'; i++)
	{
		tmp[i] = tolower(*(p + i));
	}
	return tmp;
}

void main()
{
	result = LowercaseOrUppercase();
	printf("Display English alphabet\n");
	if (result == 1)
	{
		for (a = 'A'; a <= 'Z'; a++)
		{
			printf("%c\n", a);
		}
	}
	else
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			printf("%c\n", a);
		}
	}

}