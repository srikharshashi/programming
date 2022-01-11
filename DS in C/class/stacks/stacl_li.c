#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Stack
{
    struct Node* TOP;
    int size;
};


int isFull(struct Stack* stack)
{
    int c=0;
    struct Node* temp=stack->TOP;
    while(temp!=NULL)
    {
        c+=1;
        temp=temp->next;
    }
    if(c<stack->size)
    return 0;
    else 
    return 1;

}

struct Stack* push(struct Stack* stack,int data)
{
    if(isFull(stack)!=1)
    {
        struct Node* nptr=(struct Node*)(malloc(sizeof(struct Node)));
        nptr->data=data;
        if(stack->TOP==NULL)
        {
            stack->TOP=nptr;
            nptr->next=NULL;
        }
        else
        {
            nptr->next=stack->TOP;
            stack->TOP=nptr;
        }
    }
    else
    {
        printf("Stack OverFlow \n");
    }
    return stack;
}

struct Stack* pop(struct Stack* stack)
{
    if(stack->TOP!=NULL)
        stack->TOP=stack->TOP->next;
        
    else  
      printf("Stack is empty \n");

    return stack;
}

int peek(int index,struct Stack* stack)
{
    //index is the count of the element from the top
    struct Node* temp=stack->TOP;
    if(stack->TOP!=NULL && index<stack->size)
    {
        int c=1;
        while(c!=index)
        {
            temp=temp->next;
            c++;
        }
        return temp->data;
    }
    else
    {
    printf("Error in peeking\n");
    return -1;
    }
}

void display(struct Stack* stack)
{
    if(stack->TOP!=NULL )
    {
        struct Node* temp=stack->TOP;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("-------------\n");
    }
    else
    {
        printf("The stack is empty\n");
    }
}

int stackTop(struct Stack* stack)
{
    if(stack->TOP!=NULL)
    {
        return stack->TOP->data;
    }
    else
    {
        printf("Stack doesnt exist\n");
        return -1;
    }
}

int stackBottom(struct Stack* stack)
{
    struct Node* temp=stack->TOP;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp->data;
}

void main()
{
    //initialize the stack
    struct Stack* STACK=(struct Stack*)(malloc(sizeof(struct Stack)));
    STACK->TOP=NULL;
    STACK->size=5;

    //add elements to it / push

    STACK=push(STACK,10);
    STACK=push(STACK,20);
    STACK=push(STACK,30);

    display(STACK);

    STACK= pop(STACK);

    display(STACK);

    STACK=push(STACK,40);
    STACK=push(STACK,50);
    STACK=push(STACK,60);

    display(STACK);
    printf("Peeked :%d\n",peek(4,STACK));
    printf("Stack end %d\n",stackBottom(STACK));
    printf("Stack start %d\n",stackTop(STACK));
}
