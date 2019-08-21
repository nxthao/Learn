#include <stdio.h>
/*
Should use scanf_s to take number
and take string by gets from stdin ( Can refer Practice6_7)
*/
char name[20];

void DisplayString(char *name)
{
	printf("Display name\n");
	puts(name);
}

void main()
{
	printf("Input the name\n");
	fflush(stdin);
	gets(name);
	DisplayString(name);
}