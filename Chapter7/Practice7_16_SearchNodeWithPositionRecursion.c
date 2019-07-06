#include <stdio.h>
/*
Get Nth node in linked list 
*/

typedef struct
{
	int data;
	struct Node* next;
}Node;

void InsertTail(Node** headref, int new_data)
{
	Node* new_node;
	Node* last_node;
	new_node = (Node*)malloc(sizeof(Node));
	last_node = (*headref);

	new_node->data = new_data;
	new_node->next = NULL;

	// Check if the list is empty
	if ((*headref) == NULL)
	{
		(*headref) = new_node;
		return;
	}

	// Go to the last node of the list
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
}

void DisplayNode(Node* node)
{
	printf("Display the whole node of the list\n");

	if (node == NULL)
	{
		printf("The list is empty\n");
	}

	while (node != NULL)
	{
		printf("%d \n", node->data);
		node = node->next;
	}
}

// Get Nth node in linked list
void GetNode(Node *node, int pos)
{
	static int i = 0;

	if (node != NULL && pos == i)
	{
		printf("The node at position %d have data: %d\n", pos, node->data);
		return;
	}
	if (node == NULL)
	{
		printf("The node which we need look up is invalid\n");
		return;
	}
	i++;
	GetNode(node->next, pos);

}

void main()
{
	int pos = 3; //position of node which we need to take data
	Node* head;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);
	GetNode(head, pos);
}