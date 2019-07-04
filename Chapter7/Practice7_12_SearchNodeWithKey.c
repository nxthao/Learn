#include <stdio.h>
#include<stdbool.h> 

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

bool SearchNodeWithKey(Node *node, int key)
{
	while (node->data != key)
	{
		if (node->next == NULL)
		{
			return false;
		}
		node = node->next;
	}
	return true;
}

void main()
{
	// length of linked list
	int l;
	bool search;
	Node* head;
	int key = 5;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);

	l = FindLengthLinkedList(&head);

	printf("The length of linked list = %d\n", l);

	search = SearchNodeWithKey(head, key);

	if (search == true)
	{
		printf("Able to search Node with key: %d\n", key);
	}
	else
	{
		printf("Unable to search Node with key: %d\n", key);
	}
}
