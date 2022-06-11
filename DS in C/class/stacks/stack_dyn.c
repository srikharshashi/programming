#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int* arr;
    int size;
    int top;
};

int isFull(struct Stack* stack)
{
    if(stack->size-1==stack->top)
        return 1;
    else 
        return 0;

}

int isEmpty(struct Stack* stack)
{
    if(stack->top==-1)
        return 1;
    else 
        return 0;
}

struct Stack* pop(struct Stack* stack)
{
    if(isEmpty(stack)==1)
    {
        printf("Stack is empty unable to pop\n");
    }
    else
    {
        stack->top--;
        stack->size--;
    }
    return stack;
}

struct Stack* push(struct Stack* stack,int data)
{
     if(isFull(stack)==1)
    {
        stack->size=stack->size*2;
        stack->arr=(int*)(realloc(stack->arr,stack->size));
        printf("Stack Extended\n");
    }

    if(isEmpty(stack)==1)
    {
        stack->arr[0]=data;
        stack->top=0;
    }
    else
    {
        stack->arr[stack->top+1]=data;
        stack->top++;
    }
    stack->size++;
    return stack;
}



void display(struct Stack* Stack)
{
    for(int i=0;i<=Stack->top;i++)
    {
        printf("%d\n",Stack->arr[i]);
    }
    printf("--------------------------\n");
}


void main()
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->size=5;
    stack->arr=(int*)(malloc(sizeof(int)*4));
    stack->top=-1;

    push(stack,10);
    push(stack,20);
    push(stack,30);
    push(stack,40);
    push(stack,50);
    display(stack);
    push(stack,60);
    display(stack);


}
