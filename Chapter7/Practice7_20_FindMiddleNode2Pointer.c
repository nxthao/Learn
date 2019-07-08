
#include <stdio.h>
/*
Given a singly linked list, find middle of the linked list. 
For example, if given linked list is 1->2->3->4->5 then output should be 3.
If there are even nodes, then there would be two middle nodes, 
we need to print second middle element. For example, if given linked list is 1->2->3->4->5->6 then output should be 4.
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

// Use 2 pointer traveser each node, node run faster than middle node
void FindMiddleNode(Node *node)
{
	int i = 1;
	Node *middle_node;
	middle_node = node;

	while (node->next != NULL)
	{
		node = node->next;
		if (i & 1)
		{
			middle_node = middle_node->next;
		}
		i++;
	}
	printf("The data of the middle node: %d\n", middle_node->data);
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

	FindMiddleNode(head);
}