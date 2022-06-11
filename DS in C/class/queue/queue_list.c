#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node* next;
    int data;
};
struct Queue
{
    struct Node* front;
    struct Node* rear;
};
struct Node* createNode(int data)
{
  struct Node* newnode=(struct Node*)(malloc(sizeof(struct Node)));
  newnode->data=data;
  return newnode;
}
void enque(int data,struct Queue* queue)
{
    if(queue->front=NULL && queue->rear==NULL)
    {
      queue->front=createNode(data);-x
      queue->front->next=NULL;
      queue->rear=queue->front;
    }

  struct Node* newnode=createNode(data);
  newnode->data=data;
  newnode->next=queue->rear;
  queue->rear=newnode;

}
void deque(struct Queue* queue)
{

  if(queue->front==queue->rear)
  {
    queue->front=NULL;
    queue->rear=NULL;
  }
  struct Node* temp='i'

  while()



}
void main()
{
  struct Queue* QUEUE=(struct Queue*)(mallloc(sizeof(struct Queue)));
  QUEUE->front=NULL;
  QUEUE->rear=NULL;
  enque(10,QUEUE);
}
