#include <stdio.h>

int n, *p, Sum;

void main()
{	
	printf("Input the number of elements\n");
	scanf_s("%d", &n);
	p = (int*)calloc(n,sizeof(int));

	if (p == NULL)
	{
		printf("ERROR => The memory is not allocated \n");
		exit(0);
	}
	printf("Input each element\n");
	for (int i = 0; i < n; i++)
	{
		printf("Input element %d\n", i);
		scanf_s("%d", p + i);
		Sum += *(p + i);
	}
	printf("Sum = %d\n", Sum);
	free(p);
}
