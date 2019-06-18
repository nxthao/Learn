Practice6_1_Swap:
/*
Create a function which have 2 pointer
Note: đối is pointer, so tham số thực have to put adress
*/
#include <stdio.h>

void Swap(float* a, float* b)
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
	printf("a: %f  b: %f\n", a, b);
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


Practice6_4_MultiplicationArray:

#include <stdio.h>
float A[3][2] = {{3.2, 5.6}, {5.4, 7.8}, {4.5, 9.6}};
float B[2][4] = {{4, 8.2, 10.2, 8.5}, {4.3, 5.4, 6.2, 7.3}};
float C[3][4];

void Multiplication(float A[3][2], float B[2][4])
{
	C[0][0] = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			// Multiplication 2 array
			for (int k = 0; k < 2; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
}

void PrintElement(float C[3][4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("C[%d][%d] = %0.2f  ", i, j, C[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	Multiplication(A, B);
	// Print each element of array
	PrintElement(C);
}

Practice6_6_CalculateSumLine
/*
Submit the value of array 2D, after that, we calculate sum line
*/
#include <stdio.h>

float A[30][30];
float h[30];
float x;
int m, n;

void SumLine(float B[][30], int m, int n, float* th)
{
	th[0] = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			th[i] += B[i][j];
		}
	}
}

void main()
{
	printf("Input m, n \n");
	scanf_s("%d %d", &m, &n);
	printf("Input the value of the array \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%f", &x);
			A[i][j] = x;
		}
	}
	SumLine(A, m, n, h);
	// Print element of sum line
	for (int i = 0; i < m; i++)
	{
		printf("Sum line %d = %0.2f \n", i, h[i]);
	}
}

Practice6_7_FindPeople:
/*
toupper: Change character from lowercase to uppercase (only character)
gets: get a list character in stdin( keyboard, mouse ..)
*/
#include <stdio.h>

char *S0[] = {"YES", "yes"};
char *S1[] = { "NO", "no"};
char q[25];

void FindPeople(int i)
{
	static char* ds[] = { "Wrong code", "Nguyen A", "Nguyen B", "Nguyen C", "Nguyen D" };
	printf("Code %d\n", i);
	printf("The name: %s\n", (i < 1 || i > 4) ? ds[0] : ds[i]);
}

void main()
{
	int i; //code
tt:
	{
		printf("Find people with code\n");
		printf("Input code\n");
		scanf_s("%d", &i);
		FindPeople(i);
	}
	fflush(stdin); //clean stdin before revecing a string
	printf("Do you want to continue finding any people? YES or NO\n");
	while (_kbhit() == 0)
	{
		gets(q);
		if ((strcmp(q, S0[0]) == 0) || (strcmp(q, S0[1]) == 0))
		{
			printf("Continue \n");
			goto tt;
		}
		else if ((strcmp(q, S1[0]) == 0) || (strcmp(q, S1[1]) == 0))
		{
			printf("See you again\n");
			break;
		}
	}
}

Practice6_8_Sum2numberPointer:
/*
Need to create memory for pointer before using it or
assign memory of a variable for pointer
*/
#include <stdio.h>

float a, b, * p1, * p2, S;

void main()
{

	printf("Input a\n");
	scanf_s("%f", &a);
	printf("Input b\n");
	scanf_s("%f", &b);
	p1 = &a;
	p2 = &b;
	S = *p1 + *p2;
	printf("S = %0.2f\n", S);
}

Practice6_8_SwapPointer:
#include <stdio.h>

float a, b, * p1, * p2, temp;

void main()
{
	printf("Input a\n");
	scanf_s("%f", &a);
	printf("Input b\n");
	scanf_s("%f", &b);
	p1 = &a;
	p2 = &b;
	// swap a with b
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("a = %0.2f b = %0.2f \n", a, b);
}

Practice6_8_SumArrayPointer:
#include <stdio.h>

float A[8] = {1.57,-2.352,3,-4,5,6.77,8,9};
float *p, S = 0;

void main()
{
	p = A; //p = &A[0]
	for (int i = 0; i < 8; i++)
	{
		S += *p;
		p++;
	}
	printf("S = %0.2f\n", S);
}

Practice6_8_FindLengthStringPointer
#include <stdio.h>
int length;
char str[25], * p;

int FindLength(char* p)
{
	int l = 0;
	// Check with NULL which the signal of the end string
	while (*p != '\0')
	{
		l++;
		printf("%c \n", *p);
		p++;
	}
	return l;
}

void main()
{
	printf("Input any string from keyboard\n");
	gets(str);
	p = str;// p = &str[0] address of the first element
	length = FindLength(p);
	printf("The length of string: %d\n", length);
}

Practice6_8_ConvertArrayPointer:
#include <stdio.h>
#define MAX 25

float A[MAX], * p;
int size;

void main()
{
	p = A; // p = &A[0]
	printf("Input size of the array\n");
	scanf_s("%d", &size);
	printf("Input element of array\n");
	for (int i = 0; i < size; i++)
	{
		printf("element %d: \n", i);
		scanf_s("%f", p);
		p++;
	}

	// Assign the end of the address for pointer, then print from the end to the start
	p = A + size - 1;// p = &A[size - 1];
	for (int i = size - 1; i >= 0; i--)
	{
		printf("%f ", *p);
		p--;
	}
}

Practice6_9_CalculatePointer:

#include <stdio.h>
#define MAX_TIMES 25 // MAX so chuyen
#define MAX_PEOPLE 20 // Max so tai xe

int k[MAX_TIMES];
int t[MAX_TIMES];

int *pk[MAX_PEOPLE];
int *pt[MAX_PEOPLE];
int m; // How many people
int S = 0;

void Input(int m)
{
	int* pkk; // pkk replace for k
	int* ptt; // ptt replace for t
	pkk = k;
	pk[0] = k;//assign the first address of km for pkk and address of first people for pk;
	ptt = t;
	pt[0] = t;

	for (int i = 1; i <= m; i++)// the first people equivalent with i = 1 with pk[0]
	{
	tt:
		{
			printf("Input km of worker %d: \n", i);
			scanf_s("%d", pkk);
			printf("Input weight of worker %d: \n", i);
			scanf_s("%d", ptt);
			if (*pkk != 0)
			{
				pkk++;
				ptt++;
				goto tt;
			}
		}
		pk[i] = pkk;// address km of the next people
		pt[i] = ptt;// address weight of the next people
	}
}

int WorkEachPeople(int i) // i is first , second, third ... people
{
	int S = 0;
	int* pkk;
	int* ptt;
	pkk = pk[i - 1];// With the first people, pkk will run from &pk[0]
	ptt = pt[i - 1];
	while (pkk < pk[i])// &pk[i]: address of the next people
	{
		S += (*pkk) * (*ptt);
		pkk++;
		ptt++;
	}
	return S;
}

void Output(int i)
{
	int* pkk, * ptt;
	pkk = pk[i - 1];
	ptt = pt[i - 1];
	printf("Work of the people %d\n", i);
	while (pkk < pkk[i])
	{
		printf("km = %d tan = %d\n", *pkk, *ptt);
		pkk++;
		ptt++;
	}
}

void main()
{
	printf("Input the number people \n");
	scanf_s("%d", &m);
	Input(m);
	for (int i = 1; i <= m; i++)
	{
		printf("people: %d\n", i);
		S = WorkEachPeople(i);
		printf("Total work: %d \n", S);
		Output(i);
	}
}


Practice6_10_Factorial_Recursive:
#include <stdio.h>

int i;

int Factorial(int i)
{
	int F;
	printf("i = %d\n", i);
	if (i <= 1)
	{
		return 1;
	}

	F = i * Factorial(i - 1);
	printf("F = %d\n", F);
	return F;

}

void main()
{
	printf("Value needs to calculate\n");
	scanf_s("%d", &i);
	printf("Factorial = %d\n", Factorial(i));
}

Practice6_11_Factorial_Fibonacci:
#include <stdio.h>

int Fibonacci(int i)
{
	if (i == 1)
	{
		return 1;
	}
	if (i == 0)
	{
		return 0;
	}
	return Fibonacci(i - 1) + Fibonacci(i - 2);
}

void main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d \t", Fibonacci(i));
	}
}