#include <stdio.h>

void fun(int a)
{
	printf("Value is %d\n", a);
}

void main()
{
	void (*p)(int);
	p = &fun;
	(*p)(10);
}