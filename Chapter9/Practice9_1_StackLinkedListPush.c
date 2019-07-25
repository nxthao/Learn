#include <stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

void push(struct Node* *top_ref, int new_data)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = *top_ref;

	*top_ref = new_node;
}

void displayStack(struct Node *node)
{
	printf("Display stack \n");
	while (node != NULL)
	{
		printf("%d \n", node->data);
		node = node->next;
	}
}

void main()
{
	struct Node *top;
	top = NULL;

	push(&top, 4);
	push(&top, 2);
	push(&top, 3);
	push(&top, 7);
	displayStack(top);
}