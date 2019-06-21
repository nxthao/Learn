#include <stdio.h>

int Sum(int a, int b)
{
	return a + b;
}

void main()
{
	int S;
	int (*p)(int, int);
	p = &Sum;
	S = (*p)(2,3);
	printf("Sum = %d\n", S);
}