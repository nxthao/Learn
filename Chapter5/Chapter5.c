Practice5_3_FindNegativeMatrix
#include <stdio.h>

float A[4][5] = {
	{5,1,2,0,9},
	{1,2,3.5,4,7.8},
	{3,-2.4,5,-8,7},
	{7,-8,-7,9,8.8}
};

float FirstN;
int i, j, addressColumn, addressLine;

void main()
{
	printf("Find the first negative \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] < 0)
			{
				FirstN = A[i][j];
				addressColumn = i;
				addressLine = j;
				goto Result;
			}
		}
	}
	Result:
	printf("The first negative is %f \n", FirstN);
	printf("Column address is %d \n", addressColumn);
	printf("Line address is %d \n", addressLine);
}


Practice5_4_FindMaxMinEachLine
#include <stdio.h>

float A[4][5] = {
	{5,1,2,0,9},
	{1,2,3.5,4,7.8},
	{3,-2.4,5,-8,7},
	{7,-8,-7,9,8.8}
};

float Max[4], Min[4];
int i, j;

void main()
{
	printf("Find max and min on each line \n");
	for (i = 0; i < 4; i++)
	{
		Max[i] = Min[i] = A[i][0];
		for (j = 0; j < 5; j++)
		{
			if (A[i][j] > Max[i])
			{
				Max[i] = A[i][j];
			}
			
			if (A[i][j] < Min[i])
			{
				Min[i] = A[i][j];
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		printf("Max on line %d is %f \n", i, Max[i]);
		printf(" Min on line %d is %f \n", i, Min[i]);
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