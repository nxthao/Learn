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

Practice2_2: Find max, min of 3 number which are input from keyboard

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

Practice2_4: Check bit nth (bit thu n) (n>=0) of int a is 0 or not 0
Practice2_5: Take the low byte and high byte of int a
Practice3_1: Print matrix A[8][6] ( 8 line and 6 column) ( create i, j to input the value)
Practice3_2: Ring 20 times, then keyboard and show it on the screen
Practice3_3: Program alert. program only stop when input a keyboard


Practice2_4: Check bit nth (bit thu n) (n>=0) of int a is 0 or not 0

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

Practice2_5: Take the low byte and high byte of int a

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


Practice3_1: Print matrix A[8][6] ( 8 line and 6 column) ( create i, j to input the value)

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


Practice3_2: Write a program to create a picture as bellow:

		*	*	*	*	*	*	*	*	*	*	* i = 0 A[0][5] 
		*	*	*	*	*		*	*	*	*	* i = 1 ; j = 5        A[i][5]
		*	*	*	*				*	*	*	* i = 2 ; j = 4,5,6    A[i][5+-1]
		*	*	*						*	*	* i = 3 ; j = 3,4,5,6,7   A[i][5+-2]
		*	*								*	* i = 4 ; j = 2,3,4,5,6,7,8  A[i][5+-3]
		*	*	*	*	*	*	*	*	*	*	* i = 5

if A[i][j] == A[i-1][5+i] || A[][5-i]

if A[i][j] == A[i][5]||A[i][5-]


#include <stdio.h>

int A[6][11];

void main()
{
	int i;
	int j;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf("*\t");
		}

		for (j = 5+i; j < 11; j++ )
		{
		{
			printf("*\t");
		}
		}
		printf("\n");
	}
}

Practice3_4_KbhitGetch: Print ngon ngu lap trinh, if do not  push anykeyboard,
print above line, then if push C, print TURBO.C
if push P, print PASCAL, then push any keyboard, program finish

note: to sleep in c on window. need to add library <Windows.h>, on linux: <unistd.h> 

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

void main()
{
    Continue:
	printf("Ngon Ngu Lap Trinh\n");
	Sleep(200);
	if (!_kbhit())
	{
		goto Continue;
	}
	else
	{
		if (_getch() == 67)
		{
			printf("TURBO.C\n");
			Sleep(2000);
		}
		else if (_getch() == 80)
		{
			printf("PASCAL\n");
			Sleep(2000);
		}

		while (!_kbhit())
		{
			printf("Push any keyboard to finish program\n");
			Sleep(200);
		}
	}
}

Practice5_1_ReverseArray:

#include <stdio.h>

int A[10] = {1,2,3,4,5,6,7,8,9,10};
int i,j,tmp,n;
void main()
{
	n = sizeof(A)/sizeof(int);
	printf("The total participle: %d\n", n);
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}

	printf("Array A[10] after reverse\n");
	for (i = 0; i < 10; i++)
	{
		printf(" %d", A[i]);
	}
}

Practice5_2_FindFirstNegativeArray:
/*
Find first negative in array
*/

#include <stdio.h>

int A[10] = {1,2,5,7,9,8,-2,4,-6,10};
int FirstN, Address, i;

void main()
{
	printf("Find first negative in array \n");
	for (i = 0; i < 10; i++)
	{
		if (A[i] < 0)
		{
			FirstN = A[i];
			Address = i;
			break;
		}
	}
	printf("First negative is: %d\n", FirstN);
	printf("It is participle: %d\n", Address);
}

Practice5_5_CalculateScalar
/*
Input x and y, then calculate scalar of x and y
Note: calculation: += is very good
*/
#include <stdio.h>

float x[4] = {1,2,3,4}, y[4] = {5,6,7,8}, s = 0;
int i;

void main()
{
	printf("Calculate scalar\n");
	while(i < 4)
	{
		s +=  x[i] * y[i];// it will be s = s_old + x[i] * y[i]
		i++;
	}
	printf("scalar of x and y is %f\n", s);
}

Practice5_5_Matrix1D:
/*
Calculate total of the whole positive numbers
Find the quantity of the positive numbers
Max of the positive numbers
solve:
input matrix A, find the positive numbers, then calculate total, find max, and quantity
note: Don't assign a value for a array when define. ex: is not assigned max = A[0]
when define max
*/
#include <stdio.h>

float A[8] = {1.57,-2.352,3,-4,5,6.77,8,9};
float s = 0, max; // Is not assigned max = A[0]
int i, q = 0;

void main()
{
	max = A[0];
	for (i = 0; i < 8; i++)
	{
		if (A[i] > 0)
		{
			s += A[i];
			q++
			if (A[i] > max)
			{
				max = A[i];
			}
		}
	}
	printf("Sum of the positive numbers %0.1f\n", s);
	printf("Max: %0.1f\n", max);
	printf("Quantity of the positive numbers: %d\n", q);
}

Practice5_5_Matrix2D:
#include <stdio.h>

float A[4][5] = {{ 1.22, -2.3, 3.456, 4.5, -5.67},
{ 5.6789, -6, 4, 8.9, -10},
{ 7.8, 9.3, 8.6, -7.8, 5.6},
{ 2.3, 3.4, 5.4321, 6.785, -9}};

float s = 0, max;
int i, j, q = 0;

void main()
{
	max = A[0][0];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > 0)
			{
				s += A[i][j];
				q++;
				goto FindMax;
			}

			// if put FindMax above of if above function, program will be hung 
			FindMax:
			{
				if (A[i][j] > max)
				{
					max = A[i][j];
				}
			}
		}
	}
	printf("Sum of the positive numbers %0.1f\n", s);
	printf("Max: %0.1f\n", max);
	printf("Quantity of the positive numbers: %d\n", q);
}

Practice6_1_Swap:
/*
Create a function which have 2 pointer
Note: đối is pointer, so tham số thực have to put adress
*/
#include <stdio.h>

void Swap(float *a, float *b)
{
	float tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("a: %f  b: %f\n", *a, *b);
}

void main()
{
	float a = 10.2, b = 8.42;
	Swap(&a, &b);
	printf("a: %f  b: %f\n", *a, *b);
}

Practice6_2_SumArray1D:
/*
Input the value and calculate sum of participle
*/
#include <stdio.h>

int i, n;
float A[4], s = 0;

void main()
{
	for (i = 0; i < 4; i++)
	{
		printf("Input each participle\n");
		scanf_s("%f", &A[i]);
		s += A[i];
		printf("A[%d] %f\n", i, A[i]);
	}
	printf("Sum = %0.2f\n", s);
}

Practice6_3_SumArray1DPointer:

#include <stdio.h>

int i, n;
float A[4], s = 0, *pa;
pa = A;

void main()
{
	for(i = 0; i < 4; i++)
	{
		printf("Input each participle\n");
		scanf_s("%f", &pa[i]);
		s += pa[i];
		printf("A[%d] %f\n", i, A[i]);
	}
	printf("Sum = %0.2f\n", s);
}

Practice6_4_SumArray1DPointer:
/*
Differrence pointer
*/
#include <stdio.h>

int i, n;
float A[4], s = 0, *pa;
pa = A;

void main()
{
	for(i = 0; i < 4; i++)
	{
		printf("Input each participle\n");
		scanf_s("%f", pa+i);
		s += *(pa+i);
		printf("A[%d] %f\n", i, A[i]);
	}
	printf("Sum = %0.2f\n", s);
}

Practice6_5_SolvePTB2_Pointer:

#include <stdio.h>
#include <math.h>
float a, b, c, x1, x2;
int s;

int PTB2 (float a, float b, float c, float *x1, float *x2)
{
	float delta;
	delta = b*b-4*a*c;
	if (delta < 0)
	{
		return -1;
	}
	else if (delta == 0)
	{
		*x1 = *x2;
		*x1 = -b/a;
		return 0;
	}
	else
	{
		*x1 = (-b+sqrt(delta))/(2*a);
		*x2 = (-b-sqrt(delta))/(2*a);
		return 1;
	}
}

void main()
{
	printf("Input some values: a,b,c\n");
	scanf_s("%f %f %f", &a, &b, &c);
	s = PTB2(a,b,c, &x1, &x2);
	printf("%d\n", s);
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
	if (s == -1)
	{
		printf("Program does not have value\n");
	}
	else if(s == 0)
	{
		printf("Program has a value %0.2f\n", x1);
	}
	else
	{
		printf("Program has 2 values: x1 = %0.2f; x2 = %0.2f\n", x1, x2);
	}
}
