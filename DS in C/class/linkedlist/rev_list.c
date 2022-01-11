#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
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

//PRINTING
void print_list()
{
    printf("in pr\n");
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
void reverse()
{
    //take 3 pointers
    struct Node* prev=NULL;
    struct Node* current=HEAD;
    struct Node* next=HEAD->next;

    while(current!=NULL)
    {
        //break the link
        current->next=prev;
        //make new updates
        prev=current;
        HEAD=current;
        current=next;
        if(next!=NULL)
        {
        next=next->next;
        }
    }
}
void main()
{
    add_node(10);
    add_node(20);
    add_node(30);
    add_node(40);
    print_list();
    reverse();
    print_list();
}