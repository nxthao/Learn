#include <stdio.h>
#include <string.h>

struct Books 
{
	char name[25];
	char author[25];
	int id;
};

void Output(struct Books book)
{
	printf("The name: %s\n", book.name);
	printf("The author: %s\n", book.author);
	printf("Id of book: %d\n", book.id);
}

void main()
{
	struct Books book1;
	struct Books book2;
	// Input
	printf("Input the name of book 1\n");
	gets(book1.name);
	printf("Input the author of book 1\n");	
	gets(book1.author);
	printf("Id of book 1\n");
	scanf_s("%d", &book1.id);

	fflush(stdin);
	gets(book2.name);
	printf("Input the name of book 2\n");
	gets(book2.name);
	printf("Input the author of book 2\n");	
	gets(book2.author);
	printf("Id of book 2\n");
	scanf_s("%d", &book2.id);

	printf("Information of book 1\n");
	Output(book1);
	printf("Information of book 2\n");
	Output(book2);
}