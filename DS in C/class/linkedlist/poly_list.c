#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int exp;
    struct Node *next;
};

struct Node* add_poly(struct Node* HEAD1,struct Node* HEAD2)
{
    struct Node* t1=HEAD1;
    struct Node* t2=HEAD2;
    struct Node* t3=

    while(t1!=NULL && t2!=NULL)
    {

        if(t1->coeff == t2->coeff)
        {
            
        }






        //Update the list
        t1=t1->next;
        t2=t2->next;
    }

}

//ADD NODE
struct Node *add_node(int c, int e, struct Node *h)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->coeff = c;
    new_node->exp = e;
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

//DISPLAY THE LISt
void display(struct Node *h)
{
    struct Node *temp = h;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            printf("%dX^%d+", temp->coeff, temp->exp);
        }
        else
        {
            printf("%dX^%d\n", temp->coeff, temp->exp);
        }
        temp = temp->next;
    }
}

void main()
{
    struct Node *HEAD1 = add_node(5, 0, NULL);
    HEAD1 = add_node(2, 1, HEAD1);
    HEAD1 = add_node(3, 2, HEAD1);
    display(HEAD1);

    struct Node *HEAD2 = add_node(4, 0, NULL);
    HEAD2 = add_node(3, 1, HEAD2);
    HEAD2 = add_node(2, 2, HEAD2);
    HEAD2=add_node(1,3,HEAD2);
    display(HEAD2);


    

}