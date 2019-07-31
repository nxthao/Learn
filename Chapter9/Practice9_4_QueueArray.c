#include <stdio.h>
/*
Queue with array: Enqueue, Dequeue, FrontQueue, RearQueue

*/

const int MAX = 5;

typedef struct
{
	int front;
	int rear;
	int size;
	int data[];
}Queue_t;

Queue_t *CreateQueue()
{
   Queue_t *tmpQueue;
   tmpQueue = malloc(MAX*sizeof(Queue_t));
   tmpQueue->front = -1;
   tmpQueue->rear = -1;
   tmpQueue->size = 0;
   return tmpQueue;
}

_Bool IsFull(Queue_t *tmpQueue)
{
   return tmpQueue->rear == MAX - 1 ? 1 : 0;
}

_Bool IsEmpty(Queue_t *tmpQueue)
{
   return tmpQueue->front == -1 ? 1 : 0;
}

void Enqueue(Queue_t *tmpQueue, int newData)
{
   if (IsFull(tmpQueue))
   {
      printf("The queue is full\n");
      //exit 0;
   }
   else
   {
      if (tmpQueue->front = -1)
      {
         tmpQueue->front = 0;
      }
      tmpQueue->rear++;
      tmpQueue->data[tmpQueue->rear] = newData;
      tmpQueue->size++;
	  printf("%d is enqueue\n", tmpQueue->data[tmpQueue->front]);
   }
}

void Dequeue(Queue_t *tmpQueue)
{
   if (IsEmpty)
   {
      printf("The queue is empty\n");
      //exit 0;
   }
   else
   {
      printf("%d is dequeue\n", tmpQueue->data[tmpQueue->front]);
      tmpQueue->front++;
      tmpQueue->size--;
   }

}

void main()
{
   Queue_t *queue = CreateQueue();
   Enqueue(queue, 2);
   Enqueue(queue, 4);
   Dequeue(queue);

}