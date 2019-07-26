#include <stdio.h>
/*
Push, pop, seek, isEmpty and isFull in stack with Linked List
*/

struct Node
{
   int data;
   struct Node *next;
};

void Push(struct Node* *topRef, int newData)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = newData;
   newNode->next = *topRef;
   *topRef = newNode;
}

_Bool IsEmpty(struct Node *node)
{
   if (node == NULL)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

void Pop(struct Node* *topRef)
{
   if (IsEmpty(*topRef))
   {
      printf("The stack is empty\n");
   }
   else
   {
      struct Node *tmpNode;
      tmpNode = *topRef;
      printf("Pop %d from stack\n", (*topRef)->data);
      *topRef = (*topRef)->next;
      free(tmpNode);
   }
}

struct Node *Peek(struct Node *node)
{
   if (IsEmpty(node))
   {
      printf("The stack is empty\n");
   }
   else
   {
      printf("Top is %d\n", node->data);
      return node;
   }
}

void DisplayStack(struct Node *node)
{
   if (node == NULL)
   {
      printf("The stack is empty\n");
   }

   while (node != NULL)
   {
      printf(" %d\n", node->data);
      node = node->next;
   }
}

void main()
{
   struct Node *top;
   top = NULL;
   Push(&top, 4);
   Push(&top, 3);
   Push(&top, 7);
   DisplayStack(top);
   struct Node *tmpNode = Peek(top);
   printf("Top is %d\n", tmpNode->data);
   Push(&top, 8);

   DisplayStack(top);

   Pop(&top);

   DisplayStack(top);
}