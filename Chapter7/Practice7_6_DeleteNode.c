#include <stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

// Insert a new node on the front of the list 
void InsertHead(struct Node* *headref, int new_data)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;

	new_node->next = (*headref);

	(*headref) = new_node;
}

// Insert a new node at the end of the list
void InsertTail(struct Node* *headref, int new_data)
{
	struct Node *new_node;

	struct Node *last_node;

	new_node = (struct Node*)malloc(sizeof(struct Node));

	last_node = (*headref);

	new_node->data = new_data;

	// check new the list is empty
	if ((*headref) == NULL)
	{
		(*headref) = new_node;
		new_node->next = NULL;
		return;
	}

	// go to at the end of the list
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	new_node->next = NULL;
}

//  Given a node prev_node, insert a new node after the given prev_node 
void InsertAfter(struct Node *prev_node, int new_data)
{
	struct Node *new_node;

	new_node = (struct Node*)malloc(sizeof(struct Node));

	if (prev_node == NULL)
	{
		printf("The list is empty\n");
		return;
	}

	new_node->data = new_data;

	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

// Given a ‘key’, delete the first occurrence of this key in linked list.
void DeleteNode(struct Node* *headref, int key)
{
	struct Node *tmp;
	struct Node *prev;

	// need to assign to NULL, if not, line 105 will be the error, because the prev will be intial if line 95 is right
	prev = NULL;

	// store head
	tmp = (*headref);

	//Check if head is node which we need delete
	if (tmp != NULL && tmp->data == key)
	{
		(*headref) = tmp->next;
		free(tmp);
		return;
	}

	// Find previous node which we need delete
	while (tmp != NULL && tmp->data != key)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	if (tmp == NULL)
	{
		return;
	}
	prev->next = tmp->next;
	//release memory of Node which we need to delete
	free(tmp);
}

// Display the whole node of the list
void DisplayNode(struct Node *tmp)
{
	printf("The whole node of the list\n");
	while (tmp != NULL)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
}

void main()
{
	struct Node *head;
	head = NULL;

	InsertHead(&head, 1);
	InsertHead(&head, 2);

	InsertTail(&head, 3);

	//Investigate more at here
	InsertAfter(head->next, 4);

    //Given a ‘key’, delete the first occurrence of this key in linked list.
	DeleteNode(&head, 5);

	DisplayNode(head);
}
