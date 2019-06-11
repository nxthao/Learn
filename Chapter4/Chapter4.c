Practice4_1_FindJob:
/*
code	Job
1   	Software Engineer
2		Web developer
3		IOS developer
4		Android developer
*/


#include <stdio.h>
#include <conio.h>

void main()
{
	int code;
	printf("Input code\n");
	scanf_s("%d", &code);
	switch (code)
	{
	case 1:
		printf("Software Engineer \n");
		break;

	case 2:
		printf("Web developer\n");
		break;

	case 3:
		printf("IOS developer\n");
		break;

	case 4:
		printf("Android developer\n");
		break;

	default:
		printf("Input wrong code\n");
	}

}


Practice4_2_BPT
/*
	Solve ax+b>0
*/
#include <stdio.h>

float a, b, x;

void main()
{
	printf("Input from a - b in the order\n");
	scanf_s("%f %f", &a, &b);
	if (a == 0)
	{
		if (b > 0)
		{
			printf("BPT has many values\n");
		}
		else
		{
			printf("BPT has no value\n");
		}
	}
	else if (a > 0)
	{
		x = -b / a;
		printf("BPT has a value: x > %f \n",x);
	}
	else
	{
		x = -b / a;
		printf("BPT has a value: x < %f \n", x);
	}
}