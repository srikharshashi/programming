#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char data;
    struct Node *next;
};

struct Stack
{
    struct Node *TOP;
    int size;
};

int push(struct Stack *stack, char data)
{
    struct Node *newnode = (struct Node *)(malloc(sizeof(struct Node)));
    newnode->data = data;
    if (stack->TOP == NULL)
    {
        stack->TOP = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode->next = stack->TOP;
        stack->TOP = newnode;
    }
    return data;
}

int pop(struct Stack *stack)
{
    int d = -1;
    if (stack->TOP != NULL)
    {
        d = stack->TOP->data;
        stack->TOP = stack->TOP->next;
    }
    else
    {
        printf("Stack empty \n");
    }
    return d;
}

void diplay(struct Stack *stack)
{
    struct Node *temp = stack->TOP;
    while (temp != NULL)
    {
        printf("%c\n", temp->data);
        temp = temp->next;
    }
}

int isopertor(char ch)
{
    switch (ch)
    {
    case '*':
    case '+':
    case '-':
    case '/':
        return 1;
        break;
    default:
        return 0;
    }
}
int checkprecedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '/' || ch == '*')
        return 2;
}
void main()
{
    struct Stack *STACK = (struct Stack *)(malloc(sizeof(struct Node)));

    //string input from user

    char str[100];
    printf("Enter the expression \n");
    scanf("%s", str);

    //stack allocation

    int size = strlen(str);
    STACK->size = size;
    STACK->TOP = NULL;
    printf("\n");
    int c = 0;
    while (str[c] != '\0')
    {
        if (isopertor(str[c]))
        {
            if (STACK->TOP == NULL) //if stack is empty
            {
                push(STACK, str[c]);
            }
            else
            {
                while (STACK->TOP != NULL && checkprecedence(STACK->TOP->data) >= checkprecedence(str[c]))
                {

                    printf("%c", pop(STACK));
                }
                push(STACK, str[c]);
            }
        }
        else
        {
            printf("%c", str[c]);
        }
        ++c;
    }
    while (STACK->TOP != NULL)
    {
        printf("%c", pop(STACK));
    }
    printf("\n");
}
