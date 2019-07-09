#include <stdio.h>
/*
Given a linked list and two keys in it, swap nodes for two given keys. Nodes should be swapped by changing links. 
Swapping data of nodes may be expensive in many situations when data contains many fields.
It may be assumed that all keys in linked list are distinct.
It means that we must swap node, have not to swap data as normal variable.
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

void SwapNode(Node* *headref, int key1, int key2)
{
	Node *pre_node1 = NULL;
	Node *node1 = (*headref);
	Node *pre_node2 = NULL;
	Node *node2 = (*headref);
	Node *tmp_node = NULL;

	// Find Node 1 and previous node 1
	while (node1->data != key1)
	{
		pre_node1 = node1;
		node1 = node1->next;
	}

	// Find Node 2 and previous node 2
	while (node2->data != key2)
	{
		pre_node2 = node2;
		node2 = node2->next;
	}

	// Check if node1 is head
	if (pre_node1 != NULL)
	{
		pre_node1->next = node2;	
	}
	else
	{
		(*headref) = node2;
	}

	// Check if node2 is head
	if (pre_node2 != NULL)
	{
		pre_node2->next = node1;	
	}
	else
	{
		(*headref) = node1;
	}

	// Swap Node
	pre_node2->next = node1;
	tmp_node = node1->next;
	node1->next = node2->next;
	node2->next = tmp_node;

}

void main()
{
	Node* head;
	head = NULL;
	int key1 = 2;
	int key2 = 8;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	//InsertTail(&head, 7);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);

	SwapNode(&head, key1, key2);

	DisplayNode(head);
}
