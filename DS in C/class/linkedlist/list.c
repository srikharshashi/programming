#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int size = 0;
struct Node *HEAD = NULL;
struct Node *get_tail()
{
    struct Node *temp = HEAD;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

struct Node *add_node(int d)
{ //
    //Alocate some memory for the new node
    //Create a memory
    struct Node *nptr; //new pointer location
    nptr = (struct Node *)malloc(sizeof(struct Node));
    if (HEAD == NULL)
    {
        //If the list doesn't exist
        //Then create the node and make the node the head
        HEAD = nptr;
        HEAD->next = NULL;
        HEAD->data = d;
    }
    else
    {
        //If list already exists then use the nptr and make it point to next
        //make the new node the head
        nptr->next = HEAD;
        nptr->data = d;
        HEAD = nptr;
    }
    size++;
    return HEAD;
}
struct Node *add_node_last(int d)
{
    struct Node* new=(struct Node*)(malloc(sizeof(struct Node)));
    new->data=d;
    new->next=NULL;
    struct Node* tail=get_tail();
    tail->next=new;
    size++;
    return new;
}
struct Node* insert(int index, int data)
{
    if (index == 0)
        return add_node(data);
    if (index == size - 1)
        return add_node_last(data);
    if(index>size)
        return NULL;
    
    //if you want to add in the middle then get the node before it
    struct Node *temp = HEAD;
    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->next = temp->next;
    new->data = data;
    temp->next = new;
    size++;
    return new;
}

void delete_node(int index)
{

    struct Node *temp = HEAD;
    for (int i = 1; i <= index - 1; i++)
    {
        temp = temp->next;
    }
    temp->next=temp->next->next;

}

//GETTERS=
void get_sum()
{
    
    struct Node *ptr = HEAD;
    int sum = 0;
    while (ptr != NULL)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    printf(" \n %d", sum);
}


//PRINTING
void print_list()
{
    struct Node *ptr = HEAD;
    while (ptr != NULL)
    {
        if (ptr->next != NULL)
            printf("%d-->", ptr->data);
        else
            printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    add_node(10);
    add_node(20);
    add_node(30);
    add_node(40);
    print_list();
    insert(2,25);
    print_list();
    delete_node(3);
    print_list();

}