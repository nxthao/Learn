#include <stdio.h>

struct Node 
{
	int data;
	struct Node *next;
};

void InsertHead(struct Node* *headref, int new_data)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = (*headref);

	(*headref) = new_node;
}

void InsertTail(struct Node* *headref, int new_data)
{
	struct Node *new_node;
	struct Node *last_node;

	new_node = (struct Node*)malloc(sizeof(struct Node));

	last_node = (*headref);

	new_node->data = new_data;
	new_node->next = NULL;

	if ((*headref) == NULL)
	{
		(*headref) = new_node;
		return;
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
}

void InsertAfter(struct Node *prev_node, int new_data)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	if (prev_node == NULL)
	{
		printf("The list is empty\n");
		return;
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void DeleteNodePosition(struct Node* *headref, int pos)
{
	struct Node *prev_node = NULL;
	struct Node *delete_node;

	delete_node = (*headref);

	int i = 0;
	// If head is node which we need to delete
	if (pos == 0)
	{
		(*headref) = delete_node->next;
		free(delete_node); 
		return;
	}

	while (i < pos)
	{
		prev_node = delete_node;
		delete_node = delete_node->next;
		i++;
	}

	prev_node->next = delete_node->next;
	free(delete_node);
}

void DisplayNode(struct Node *head)
{
	printf("Display the whole node of the list\n");
	while (head != NULL)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}

void main()
{
	struct Node *head;
	head = NULL;

	InsertTail(&head, 2); // 2->NULL

	InsertTail(&head, 4); // 2->4->NULL

	InsertHead(&head, 6); // 6->2->4->NULL

	InsertAfter(head->next, 8); // 6->2->8->4->NULL

	InsertHead(&head, 3); // 3->6->2->8->4->NULL

	InsertTail(&head, 5); // 3->6->2->8->4->5->NULL

	InsertAfter(head, 7); // 3->7->6->2->8->4->5->NULL

	DeleteNodePosition(&head, 2);

	DisplayNode(head);
}