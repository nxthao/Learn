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



#include <stdio.h>
#include <math.h>

float a, b, c, d, e;

void main()
{
	printf("==== Calculate multiplcation ==== \n");
	printf("Input a,b,c,d \n");
	scanf_s("%f %f %f %f", &a, &b, &c, &d);
	e = a*b*c*d;
	printf("Multiplcation 4 munbers a,b,c,d is e: %f", e);
}

lk2=bl*n/26-lk1

bl=bac luong, n so ngay cong, lk1: tien linh ki 1 ( nhap 3 tham so nay)


#include <stdio.h>

float bl, lk1, lk2;
int n;

void main()
{
	printf("==== Calculate Salary ==== \n");
	printf("Input level salary\n");
	scanf_s("%f", &bl);
	printf("Input the working days\n");
	// I define n is int, so n have to be %d
	scanf_s("%d", &n); 
	printf("Input the salary which is received the first\n");
	scanf_s("%f", &lk1);
	lk2 = bl*n/26 - lk1;
	printf("Total salary is received in the second: %f \n", lk2);
}

chapter 2 : giai pt bac 2: ax2+bx+c=0 (gia su delta ko am)

#include <stdio.h>
#include <math.h>

int a,b,c;
float x,x1,x2,D;

void main()
{
	printf("Input a,b,c \n");
	scanf_s("%d %d %d", &a, &b, &c);
	D = b*b-4*a*c;
	if (D > 0)
	{
		printf("Program has 2 value \n");
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		printf("x1 = %f x2 = %f", x1, x2);
	}
	else if (D == 0)
	{
		printf("program has 1 value \n");
		x = -b/2*a;
		printf("x = %d \n", x);
	}
	else
	{
		printf("Program has no value\n");
	}
}

Pracitce2_2: Find max, min of 3 number which are input from keyboard

#include <stdio.h>

float a,b,c,max,min;

void main()
{
	printf("Input 3 numbers a,b,c\n");
	scanf_s("%f %f %f", &a, &b,&c);
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	if (max > c)
	{
		if(min > c)
		{
			min = c;
		}
	}
	else
	{
		max = c;
	}

	printf("max = %f \nmin = %f \n", max, min);
}

Pracitce2_4: Check bit nth (bit thu n) (n>=0) of int a is 0 or not 0
Pracitce2_5: Take the low byte and high byte of int a
Pracitce3_1: Print matrix A[8][6] ( 8 line and 6 column) ( create i, j to input the value)
Pracitce3_2: Ring 20 times, then keyboard and show it on the screen
Pracitce3_3: Program alert. program only stop when input a keyboard


Pracitce2_4: Check bit nth (bit thu n) (n>=0) of int a is 0 or not 0

#include <stdio.h>
#include <math.h>

int a,b,n;

void main()
{
	printf("Input int a\n");
	scanf_s("%d", &a);
	printf("Check bit n\n");
	scanf_s("%d", &n);
	b=a>>n;
	//if (0x01 & b != 0) if use !=0 if will failed ?????
	if (0x01 & b)
	{
		printf("Bit n is 1\n");
	}
	else
	{
		printf("Bit n is 0\n");
	}

}

6: 110 -> 01=0

011 

Pracitce2_5: Take the low byte and high byte of int a

#include <stdio.h>
#include <math.h>

int a,byte_low,byte_high;

void main()
{
	printf("Input int a\n");
	scanf_s("%d", &a);

	// int 2 byte: 0x0000
	byte_low = a & 0xff; 
	byte_high = a >> 8;
	// print hexa type
	printf("byte_low %x\n", byte_low);
	printf("byte_high %x\n", byte_high );
}


Pracitce3_1: Print matrix A[8][6] ( 8 line and 6 column) ( create i, j to input the value)

#include <stdio.h>

int A[8][6];

void main()
{
	int i;
	int j;
	for ( i = 0; i < 8; i++)
	{
		for( j = 0; j < 6; j++)
		{
			A[i][j] = j;
			printf("%s", A[i][j]);
		}
		printf("s\n");
	}
}