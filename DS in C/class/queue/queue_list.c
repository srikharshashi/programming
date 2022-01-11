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
    int size;
};
int enque(int data,struct Queue* queue)
{
    
}
void main()
{
  struct Queue* QUEUE=(struct Queue*)(mallloc(sizeof(struct Queue)));
  QUEUE->size=5;  
}
