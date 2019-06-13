#include <stdio.h>
#include <string.h>

struct Books
{
	char  name[50];
	char  author[50];
	char  topic[100];
	int   id;
};

void OutpuBook(struct Books book);
int main()
{
	struct Books Book1;
	struct Books Book2;

	/* Information for book 1 */
	printf("Input name Book 1\n");
	gets(Book1.name);
	printf("Input author\n");
	gets(Book1.author);
	printf("Input topic\n");
	gets(Book1.topic);
	printf("Input id\n");
	scanf_s("%d%*c", &Book1.id);

	/* Information for book 2 */
	printf("Input name Book 2\n");
	gets(Book2.name);
	printf("Input author\n");
	gets(Book2.author);
	printf("Input topic\n");
	gets(Book2.topic);
	printf("Input id\n");
	scanf_s("%d", &Book2.id);

	printf("\n");
	OutpuBook(Book1);
	printf("\n");
	OutpuBook(Book2);

	printf("\n===========================\n");
	return 0;
}
void OutpuBook(struct Books book)
{
	printf("The name of the book: %s\n", book.name);
	printf("Author: %s\n", book.author);
	printf("Topic: %s\n", book.topic);
	printf("Book ID: %d\n", book.id);
}