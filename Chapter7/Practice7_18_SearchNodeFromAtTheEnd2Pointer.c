#include <stdio.h>

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

void SearchNodeFromEnd(Node *head, int key)
{
	Node *main_node = head;
	Node *node = head;

	// move node to 3th node
	for (int i = 1; i < key; i++)
	{
		if (node->next == NULL)
		{
			printf("The %dth node at the end which we need to find is invalid\n", key);
			return;
		}
		node = node->next;
	}

	while (node->next != NULL)
	{
		node = node->next;
		main_node = main_node->next;
	}
	printf("Data from %dth Node at the end of the list: %d\n", key, main_node->data);
}



void main()
{
	int l; // length of linked list
	int pos_end = 3;
	Node* head;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);

	SearchNodeFromEnd(head, pos_end);
}