#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* next;
};
int size=0;
struct Node* hptr=NULL;
struct Node* add_node(struct Node* h,int d)
{
    struct Node* nptr;
    nptr=(struct Node*)malloc(sizeof(struct Node));
    if(h==NULL)
    {
        hptr=nptr;
        hptr->next=NULL;
        hptr->next=NULL;
        hptr->data=d;
        return hptr;
    }
    else
    {
        nptr->next=hptr;
        hptr->next=nptr;
        nptr->next=NULL;
        nptr->data=d;
        hptr=nptr;
        return hptr;
    }
    size++;
}
void display(struct Node *t)
{
    struct Node* temp=t;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            printf("%d -->",temp->data);
        }
        else 
        {
            printf("%d\n",temp->data);
        }
        temp=temp->next;
    }
}

void rdisplay(struct Node*t)
{
    struct Node* temp=t;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        printf("%d -->",temp->data);
        else 
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
struct Node* getnode(int index)
{
    struct Node* temp=hptr;
    for(int i=1;i<index;i++)
    {
        temp=temp->next;
    }
    return temp;
}
struct Node* insert(struct Node* head,int data,int index)
{
    struct Node* prevn=getnode(index);
    struct Node* nextn =getnode(index+1);
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    prevn->next=newnode;
    newnode->next=nextn;
    nextn->next=newnode;
    newnode->next=prevn;
    size++;
    return newnode;
    
}
struct Node* delete(int index)
{
    struct Node* temp=getnode(2);
    printf("%d",temp->)
}

int main()
{
    add_node(hptr,40);
    add_node(hptr,30);
    add_node(hptr,20);
    add_node(hptr,10);
    display(hptr);
    insert(hptr,35,3);
    display(hptr);
    return 0;
}