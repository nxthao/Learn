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

int CountNumberTimesOccurData(Node *node, int key)
{
	static int count = 0;

	if (node == NULL)
	{
		return count;
	}

	if (node->data == key)
	{
		count++;
	}

	CountNumberTimesOccurData(node->next, key);
}

void main()
{
	int key = 4, times;
	Node* head;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	InsertTail(&head, 6);
	InsertTail(&head, 8);
	InsertTail(&head, 4);

	DisplayNode(head);

	times = CountNumberTimesOccurData(head, key);

	printf("%d appear in the linked list: %d times\n", key, times);
}