#include <stdio.h>
#include <math.h>

float a, b, c;

void main()
{
	printf("Input a: \n");
	scanf_s("%f", &a);
	printf("Input b: \n");
	scanf_s("%f", &b);
	c = pow(a,b);
	printf("exponential: %f",c);
}
