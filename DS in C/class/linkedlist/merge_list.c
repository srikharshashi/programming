#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// struct Node *HEAD1 = NULL;
// struct Node *HEAD2 = NULL;

struct Node *add_node(struct Node *h, int d)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(malloc));
    new_node->data = d;
    if (h == NULL)
    {
        h = new_node;
        h->next = NULL;
    }
    else
    {
        new_node->next = h;
        h = new_node;
    }
    return h;
}
void display(struct Node *h)
{
    struct Node *temp = h;
    while (temp!= NULL)
    {
        if (temp->next != NULL)
        {
            printf("%d-->", temp->data);
        }
        else
        {
            printf("%d\n", temp->data);
        }
        temp = temp->next;
    }
}
struct Node*  merge(struct Node* t1,struct Node* t2)
{
    while()
}
void main()
{
    struct Node *HEAD1 = add_node(NULL, 5);
    HEAD1 = add_node(HEAD1, 3);
    HEAD1 = add_node(HEAD1, 1);
    display(HEAD1);

    struct Node* HEAD2=add_node(NULL,6);
    HEAD2=add_node(HEAD2,4);
    HEAD2=add_node(HEAD2,2);
    display(HEAD2);

    merge(HEAD1,HEAD2);
}

