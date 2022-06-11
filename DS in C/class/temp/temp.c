#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int coeff;
    int exp;
    struct Node* next;
};
struct Node* add_node(int coeff,int exp,struct Node* HEAD)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->coeff=coeff;
    newnode->exp=exp;
    newnode->next=NULL;

    if(HEAD==NULL)
    {
        return newnode;
    }
    else
    {
        newnode->next=HEAD;
        return newnode;
    }

}
struct Node* reverse(struct Node* node)
{
    struct Node* temp=NULL;
    while(node!=NULL)
    {
        temp=add_node(node->coeff,node->exp,temp);
        node=node->next;
    }
    return temp;
}
struct Node* add_quad(struct Node* head1,struct Node* head2)
{
    struct Node* head3=NULL;
    while(head1!=NULL && head2!=NULL)
    {
        // printf(" head 1: %d head 2: %d",head1->coeff,head2->coeff);
        if(head1->exp==head2->exp)
        {
            
            head3=add_node(head1->coeff+head2->coeff,head1->exp,head3);
            head1=head1->next;
            head2=head2->next;
        }
        else if(head1->exp<head2->exp)
        {
            head3=add_node(head2->coeff,head2->exp,head3);
            head2=head2->next;
        }
        else
        {
            head3=add_node(head1->coeff,head1->exp,head3);
            head1=head1->next;
        }

    }
    if(head1==NULL && head2!=NULL)
    {
        while(head2!=NULL)
        {
            head3=add_node(head2->coeff,head2->exp,head3);
            head2=head2->next;
        }
    }
    if(head2==NULL && head1!=NULL)
    {
        while(head1!=NULL)
        {
            head3=add_node(head1->coeff,head1->exp,head3);
            head1=head1->next;
        }
    }
    head3=reverse(head3);
    return head3;
}
void display(struct Node* head)
{
    struct Node* t=head;
    while(t!=NULL)
    {
        printf("%dX^%d ",t->coeff,t->exp);
        t=t->next;
    }
    printf("\n");
}
void main()
{
    struct Node* head1=add_node(2,0,NULL);
    head1=add_node(3,1,head1);
    head1=add_node(4,2,head1);
    head1=add_node(6,3,head1);
    display(head1);

    struct Node* head2=add_node(5,0,NULL);
    head2=add_node(5,1,head2);
    head2=add_node(6,2,head2);
    display(head2);

    struct Node* head3=add_quad(head1,head2);
    display(head3);

}
