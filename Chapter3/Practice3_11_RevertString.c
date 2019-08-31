#include <stdio.h>
/*
Able to print the string by print("%s", p)
If I move the pointer, it will print the string after its address
*/

char *a, *b;

char *InputString()
{
	static char tmp[20];
	printf("Please input the string\n");
	gets(tmp);
	return tmp;
}

/*
add pointer i and o because, after I move pointer to other address,
I need the original address to return (if I don't use these pointer, I need 
move pointer to the started place)
*/
char *RevertString(char *input)
{
	static char output[20];
	char *i, *o;
	i = input;
	o = output;
	printf("Revert string %s\n", input);
	while (*(input) != '\0')
	{
		printf("%c\n", *input);
		input++;
	}
	input--;
	while (i <= input)
	{
		*o = *input;
		printf("input %c\n", *input);
		printf("output %c\n", *o);
		o++;
		input--;
	}
	puts(o);
	puts(output);
	return output;
}

void Display(char *p, char *q)
{
	printf("Display the string %s after convert\n", p);
	printf("%s\n", q);
}

void main()
{
	a = InputString();
	b = RevertString(a);
	Display(a, b);
}