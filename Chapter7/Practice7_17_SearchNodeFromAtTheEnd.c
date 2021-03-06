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

int FindLengthLinkedList(Node** headref)
{
	Node* node;
	node = (*headref);
	int l = 0;
	while (node != NULL)
	{
		l++;
		node = node->next;
	}
	return l;
}

void FindNodeAtTheEnd(Node *node, int pos_end, int l)
{
	int i = 0;

	for (i = 1; i <= l - pos_end; i++ )
	{
		if (node->next == NULL)
		{
			printf("Error. The list error\n");
		}
		node = node->next;
	}

	printf("Data from at the end of the %dth Node: %d\n", pos_end, node->data);
}

void main()
{
	int l; // length of linked list
	int pos_end = 4;
	Node* head;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);

	l = FindLengthLinkedList(&head);

	printf("The length of linked list = %d\n", l);

	FindNodeAtTheEnd(head, pos_end, l);

}