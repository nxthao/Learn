#include <stdio.h>

int *p;
int a = 2;

void main()
{
	p = &a;
	printf("Address of pointer p %p\n", &p);
	printf("Address of p %x\n", p);
	printf("Address of a %x\n", &a);
	printf("Value of a %d\n", a);
	printf("Value of variable which p point %d\n", *p);
}