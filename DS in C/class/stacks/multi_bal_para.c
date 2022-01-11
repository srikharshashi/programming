#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char data;
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

struct Stack* push(struct Stack* stack,char data)
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

char pop(struct Stack* stack)
{
    char ch=stack->TOP->data;
    stack->TOP=stack->TOP->next;
    return ch;
}



void main()
{
    // initialize the stack
x1
    //get the expression
    char str[20];
    printf("Enter the expression ");
    scanf("%s",str);

    int size=strlen(str);
    STACK->size=size;

    //traverse through the string
    for(int i=0;i<size;i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            push(STACK,str[i]);
        }
        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            //If the stack Under flows or has no elements when you wan to pop then its an unbalanced equation
           if(STACK->TOP==NULL)
           {
               printf("Un-Balanced Expression\n");
               break;
           }
           else
           {
            char ch=pop(STACK);
            // printf("%c %c \n",ch,str[i]);
            if( !((ch=='(' && str[i]==')') || (ch=='{' && str[i]=='}') || (ch=='[' && str[i]==']')) )
            {
                printf("Improper Equation\n");
                break;
            }
           }
        }
        if(i==size-1)
        {
            if(STACK->TOP!=NULL)
                {
                    printf("Un-Balanced Expression\n");
                }
            else
                {
                    printf("Balanced Expression\n");
                }
        }
    }

    
}
