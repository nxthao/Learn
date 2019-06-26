#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

void printList(struct Node* p)
{
	while(p != NULL)
	{
		printf("The value is %d \n", p->data);
		p = p->next;
	}

}

void main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	head = (struct Node*)malloc(1 * sizeof(struct Node));
	second = (struct Node*)malloc(1 * sizeof(struct Node));
	third = (struct Node*)malloc(1 * sizeof(struct Node));

	head->data = 1;
	head->next = second; // assign address of second for head->next

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	// Print the value of link list
	printList(head);
}