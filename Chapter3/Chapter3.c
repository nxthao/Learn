/*Pracitce3_2: Write a program to create a picture as bellow:

		*	*	*	*	*	*	*	*	*	*	* 
		*	*	*	*	*		*	*	*	*	* 
		*	*	*	*				*	*	*	* 
		*	*	*						*	*	* 
		*	*								*	* 
		*	*	*	*	*	*	*	*	*	*	* 
*/


#include <stdio.h>

void main()
{
	int i, j;
	int h = 6;
	for ( i = 0; i < h; i++)
	{
		if (i == 0 || i == 5)
		{
			for (j = 0; j < 2 * h - 1; j++)
			{
				printf("* ");
			}
		}
		else
		{
			for (j = 0; j < 2 * h - 1; j++)
			{
				if (j >= h - 1 - (i - 1) && j <= h - 1 + (i-1))
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
				//printf("* ");
			}
		}

		printf(" \n");
	}
}

/*Pracitce3_3: Write a program to create a picture as bellow:

							*					 
						*		*				 
					*				*			 
				*						*		 
			*								*	 
		*	*	*	*	*	*	*	*	*	*	* 
*/

#include <stdio.h>

int i, j;
int h = 6;

void main()
{
	for (i = 0; i < h; i++)
	{
		if (i == 5)
		{
			for (j = 0; j < 2 * h - 1; j++)
			{
				printf("* ");
			}
			
		}
		else
		{
			for (j = 0; j < 2 * h - 1; j++)
			{
				if (j == h - 1 - i || j == h - 1 + i)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
				//printf("* ");
			}
			printf(" \n");
		}

	}
}

Pracitce3_4_FindLengthString:
/*
Find the length of string with strlen
*/
#include <stdio.h>
#include <string.h>

char str[25];
int l;

void main()
{
	printf("Input any string from keyboard\n");
	gets(str);
	// Find the length of string with strlen
	l = strlen(str);
	printf("length of string = %d\n", l);
}
