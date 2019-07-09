#include <stdio.h>
/*
Mode last node to head node.
For example, if the given Linked List is 1->2->3->4->5, 
then the function should change the list to 5->1->2->3->4.
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

void MoveLastToHead(Node* *headref)
{
	Node *last = NULL;
	last = (*headref);
	Node *pre_last = NULL;
	Node *swap_node = NULL;
	swap_node = (*headref);
	while (last->next != NULL)
	{
		pre_last = last;
		last = last->next;
	}

	pre_last->next = NULL;

	last->next = (*headref);
	(*headref) = last;
}

void main()
{
	Node* head;
	head = NULL;

	InsertTail(&head, 2);
	InsertTail(&head, 4);
	//InsertTail(&head, 7);
	InsertTail(&head, 6);
	InsertTail(&head, 8);

	DisplayNode(head);

	/*we can use a pointer, don't need to use double pointer. because,
	in this function, we don't assign memory for a new node.
	*/
	MoveLastToHead(&head);

	DisplayNode(head);
}