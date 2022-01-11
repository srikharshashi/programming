#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* next;
};

int size=0;

struct Node* add_node(int data,struct Node* HEAD)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;

    if(HEAD==NULL)
    {
        HEAD=newnode;
        HEAD->next=NULL;
        HEAD->next=NULL;
    }   
    else
    {
        newnode->next=HEAD;
        newnode->next=NULL;
        HEAD->next=newnode;
        HEAD=newnode;
    }
    ++size;
    return newnode;
}

struct Node* gettail(struct Node* HEAD)
{
    if(size==1)
    return HEAD;

    struct Node* temp=HEAD;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    return temp;
}

void rdisplay(struct Node* HEAD)
{
    struct Node* temp=gettail(HEAD);
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            printf("%d <-- ",temp->data);
        }
        else{
            printf("%d",temp->data);
        }
        temp=temp->next;
    }
}

struct Node* getnode(struct Node* HEAD,int index)
{
    if(index>size || index<=0)
    return NULL;
    struct Node* temp=HEAD;
    while(index!=0)
    {
        temp=temp->next;
        --index;
    }
    return temp;
}
struct Node* addlast(struct Node* HEAD,int data)
{
    struct Node* TAIL=gettail(HEAD);
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=TAIL;
    TAIL->next=newnode;
    newnode->next=NULL;
    TAIL=newnode;
    return TAIL;
}
struct Node* insert(int index,struct Node* HEAD,int data)
{   
    //Edge Cases
    if(index==0)
    return add_node(data,HEAD);
    else if(index==size)
    return addlast(HEAD,data);
    else if(index>size)
    return NULL;

    //get required nodes to make connections
    struct Node* prev_node=getnode(HEAD,index-1);
    struct Node* next_node=prev_node->next;

    //make a new node to insert and give it data
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;

    //make the new connections
    prev_node->next=newnode;
    newnode->next=next_node;
    next_node->next=newnode;
    newnode->next=prev_node;

    //return the node
    return newnode;

}
void display(struct Node* HEAD)
{
    if(HEAD==NULL)
    {
        printf("The passed the head was null\n");
    }
    struct Node* temp=HEAD;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            printf("%d --> ",temp->data);
        }
        else{
            printf("%d\n",temp->data);
        }
        temp=temp->next;
    }
}
struct Node* delfirst(struct Node* HEAD)
{
    struct Node* newhead=HEAD->next;
    newhead->next=NULL;
    --size;
    return newhead;
}
struct Node* dellast(struct Node* HEAD)
{
    struct Node* TAIL=gettail(HEAD);
    struct Node* newtail=TAIL->next;
    newtail->next=NULL;
    --size;
    return TAIL;
}
struct Node* delete(struct Node* HEAD,int index)
{
    if(size>1)
    {
        if(index==0)
        return delfirst(HEAD);
        if(index==size-1)
        return dellast(HEAD);
        if(index>=size)
        return NULL;

        //delete in the middle
        struct Node* prev_node=getnode(HEAD,index-1);
        struct Node* del=prev_node->next;
        struct Node* next_node=prev_node->next->next;
        --size;
        prev_node->next=next_node;
        next_node->next=prev_node;
        return del;
    }
    else if(size==1)
    {
        --size;
        free(HEAD);
        return NULL;
    }
    else if(size==0)
    return NULL;
}
int main()
{
    struct Node* HEAD1=add_node(10,NULL);
    HEAD1=add_node(20,HEAD1);
    HEAD1=add_node(30,HEAD1);
    HEAD1=add_node(40,HEAD1);
    display(HEAD1);
    return 0;
}