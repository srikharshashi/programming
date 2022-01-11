#include<stdio.h>
#include<stdlib.h>
//Queue is a data structure which ha a FIFO proerty in which you can insert the one you remove first 
//and delete the one you inserted last
//this is its implementation using arrays
struct Queue
{
    int front;
    int rear;
    int *arr;
    int size;
};
//front and rear are indexes 
int isEmpty(struct Queue* queue)
{
    if(queue->front ==-1 || queue->rear==-1)
        return 1;
    if(queue->size==0)
        return 1;
    else return 0;
}
int isFull(struct Queue* queue)
{
    if(queue->front==queue->size-1)
        return 1;
    else return 0;
}
int enqueue(struct Queue* queue,int data)
{
    if(queue->arr==NULL)
    {
        queue->arr=(int*)(malloc(sizeof(int)*queue->size));
        queue->arr[0]=data;
        queue->front++;
        queue->rear++;
        queue->size++;
        return 1;
    }
    else
    {
        if(!isFull(queue))
        {
        queue->rear++;
        queue->arr[queue->rear]=data;
        queue->size++;
        return 1;

        }
        else return 0;
    }
    return 0;
}
int deque(struct Queue* queue)
{
    if(queue!=NULL)
    {
        if(!isEmpty(queue))
        {
        queue->rear--;
        queue->size--;
        }
        else return 0;
    }
    else
    {
        return 0;
    }
}
void display(struct Queue* queue)
{
    int c=queue->front;
    while(c!=queue->rear+1)
    {
        printf("%d ",queue->arr[c]);
        c++;
    }
    printf("\n");
}
void main()
{
    struct Queue* QUEUE=(struct Queue*)(malloc(sizeof(struct Queue)));
    QUEUE->front=-1;
    QUEUE->rear=-1;
    QUEUE->arr=NULL;
    printf("enter size of stack\n");
    scanf("%d",&QUEUE->size);

    enqueue(QUEUE,10);
    enqueue(QUEUE,20);
    enqueue(QUEUE,30);

    display(QUEUE);
}
