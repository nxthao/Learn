#include <stdio.h>

struct Node
{
	int data;
	struct Node *next;
};

// inserts a new node on the front of the list
void InsertHead(struct Node* *headref, int newdata)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = newdata;

	new_node->next = (*headref);

	(*headref) = new_node;
}

// Insert a new node at the end
void InsertTail(struct Node* *headref, int newdata)
{
    struct Node *new_node;

    struct Node *last_node;

    new_node = (struct Node*)malloc(sizeof(struct Node));

    last_node = *headref;

    new_node->data = newdata;

    new_node->next = NULL;

    // check if the list is empty
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

/* 
    Given a node prev_node, insert a new node after the given 
    prev_node 
*/
void InsertAfter(struct Node *previous_node, int newdata)
{
	struct Node *new_node;
	new_node = (struct Node*)malloc(sizeof(struct Node));

	if (previous_node == NULL)
	{
		printf("List is empty\n");
		return;
	}

	new_node->data = newdata;
	new_node->next = previous_node->next;

	previous_node->next = new_node;
}

// This function prints contents of linked list starting from head 
void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 

void main()
{
	struct Node *head;
	head = NULL;

  // Insert 6.  So linked list becomes 6->NULL 
  append(&head, 6); 
  
  // Insert 7 at the beginning. So linked list becomes 7->6->NULL 
  push(&head, 7); 
  
  // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL 
  push(&head, 1); 
  
  // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL 
  // &head: assign address of head,if we use "head" , it is address of variable which pointer head point to this
  append(&head, 4); 
  
  // Insert 8, after 7. So linked list becomes 1->7->8->6->4->NULL 
  // head->next la assign address of next
  insertAfter(head->next, 8); 
  
  printf("\n Created Linked list is: "); 
  printList(head);

}