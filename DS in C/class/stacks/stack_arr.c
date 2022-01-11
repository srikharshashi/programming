#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int top;//it is index
    int size;//size
    int* arr;//pointer to array in heap
};
int isEmpty(struct Stack* stack)
{
    return stack->top==-1 ? 1:0;
}
int isFull(struct Stack* stack)
{
    return stack->top ==stack->size-1 ? 1:0;
}
void peek(struct Stack* stack,int n) //get the nth element from the top(1-->n)
{
    printf(" %dth elemt from the top is :: %d",n,stack->arr[stack->top-n+1]);
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
struct Stack* push(int data,struct Stack* stack)
{
    if(isFull(stack)==1)
    {
        printf("Stack OverFlow Error\n");
    }
    else
    {
    
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
    }
    return stack;
}
void display(struct Stack* stack)
{
    int *temp=stack->arr;
    for(int i=stack->top;i>=0;i--)
    {
        printf(" %d \n",temp[i]);
    }
}

void main()
{
    struct Stack* STACK=(struct Stack*)(malloc(sizeof(struct Stack)));
    STACK->size=4;
    STACK->top=-1;
    STACK->arr=(int*)(malloc(sizeof(STACK->size*sizeof(int))));

    STACK=push(10,STACK);
    STACK=push(20,STACK);
    STACK=push(30,STACK);
    STACK=push(40,STACK);
    display(STACK);
    STACK=pop(STACK);
    peek(STACK,1);


}