#include <stdio.h>
/*
Stack with array
*/
const int SIZE = 5;

typedef struct 
{
	int top;
	int data[];
}Stack_t;

Stack_t *CreateStack()
{
	Stack_t* stack;
	stack = malloc(SIZE * sizeof(Stack_t));
	stack->top = -1;
	return stack;
}

_Bool IsFull(Stack_t *tmpStack)
{
	return tmpStack->top == SIZE - 1;
}

_Bool IsEmpty(Stack_t *tmpStack)
{
	return (tmpStack->top == -1) ? 1 : 0;
}

void Push(Stack_t *tmpStack, int newData)
{
	if (IsFull(tmpStack))
	{
		printf("The stack is full\n");
		return;
	}
	else
	{
		tmpStack->top++;
		tmpStack->data[tmpStack->top] = newData;
	}
	printf("%d is pushed\n", tmpStack->data[tmpStack->top]);
}

void Pop(Stack_t *tmpStack)
{
	if (IsEmpty(tmpStack))
	{
		printf("The stack is empty\n");
	}
	else
	{
		printf("%d is poped\n", tmpStack->data[tmpStack->top]);
		tmpStack->top--;
	}
}

int Peek(Stack_t *tmpStack)
{
	if (IsEmpty(tmpStack))
	{
		printf("The stack is empty\n");
		return;
	}
	else
	{
		return tmpStack->data[tmpStack->top];
	}
}

void DisplayStack(Stack_t *tmpStack)
{
	printf("Show the entire stack: \n");
	for (int i = 0; i <= tmpStack->top; i++)
	{
		printf("%d\n", tmpStack->data[i]);
	}
}

void main()
{
	Stack_t *stack = CreateStack();
	int topData;
	Push(stack, 1);
	Push(stack, 2);
	Push(stack, 3);
	Push(stack, 4);
	Push(stack, 5);
	Push(stack, 7);
	DisplayStack(stack);
	Pop(stack);
	DisplayStack(stack);
	topData = Peek(stack);
	printf("Top is %d\n", topData);
}
