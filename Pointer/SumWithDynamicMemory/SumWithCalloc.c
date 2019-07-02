/*
Input the number of elements
Input each element 
*/
#include <stdio.h>

void main()
{
	int n, *p, SUM = 0;
	printf("Input the number of elements\n");
	scanf_s("%d", &n);
	p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("Error => Memory is not allocated\n");
		exit(0);
	}
	printf("Input each element: \n");
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", p + i);
		SUM += *(p + i);
	}
	printf("Sum: %d\n", SUM);
	free(p);
}