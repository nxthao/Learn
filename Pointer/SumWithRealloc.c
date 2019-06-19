#include <stdio.h>

int n, m, *p, Sum;

void main()
{
	printf("Input the number of the elements\n");
	scanf_s("%d", &n);
	p = (int*)malloc(n*sizeof(int));
	if (p == NULL)
	{
		printf("ERROR => The memory is not allocated\n");
		exit(0);
	}
	printf("Addresses of previously allocated memory: \n");
	for (int i = 0; i < n; i++)
	{
		printf("Input element %d\n", i);
		scanf_s("%d", p + i);
		Sum += *(p + i);
		printf("%u\n", p + i);
	}
	printf("Sum = %d\n", Sum);

	printf("Increase the number of element\n");
	scanf_s("%d", &m);
	printf("Increase memory for pointer \n");
	p = realloc(p, m * sizeof(int));
	printf("Addresses of previously allocated memory: \n");
	for (int i = 0; i < m; i++)
	{
		printf("Input the element %d\n", n+i);
		scanf_s("%d", p+i);
		Sum += *(p + i);
		printf("%u\n", p + i);
	}
	printf("Sum = %d\n", Sum);
	free(p);
}