//Add two polynomials using a linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int exp;
    struct Node *next;
};
void display(struct Node *h)
{
    struct Node *temp = h;
    while (temp != NULL)
    {
        if (temp->next != NULL)
        {
            printf("%dX^%d + ", temp->coeff, temp->exp);
        }
        else
        {
            printf("%d\n", temp->coeff);
        }
        temp = temp->next;
    }
}
struct Node *addnode(int exp, int coeff, struct Node *h)
{
    struct Node *newnode = (struct Node *)(malloc(sizeof(struct Node)));
    newnode->exp = exp;
    newnode->coeff = coeff;
    if (h == NULL)
    {
        h = newnode;
        h->next = NULL;
    }
    else
    {
        newnode->next = h;
        h = newnode;
    }
    return h;
}
struct Node* reverse(struct Node *h)
{
    struct Node *temp = NULL;
    while (h != NULL)
    {
        temp = addnode(h->exp, h->coeff, temp);
        h = h->next;
    }
    return temp;
}
struct Node *addquad(struct Node *HEAD1, struct Node *HEAD2)
{
    struct Node *ptr3 = NULL;
    while (HEAD1 != NULL && HEAD2 != NULL)
    {
        if (HEAD1->exp == HEAD2->exp)
        {
            ptr3 = addnode(HEAD1->exp, HEAD1->coeff + HEAD2->coeff, ptr3);
            HEAD1 = HEAD1->next;
            HEAD2 = HEAD2->next;
        }
        else if (HEAD1->exp > HEAD2->exp)
        {
            ptr3 = addnode(HEAD1->exp, HEAD1->coeff, ptr3);
            HEAD1 = HEAD1->next;
        }
        else
        {
            ptr3 = addnode(HEAD2->exp, HEAD2->coeff, ptr3);
            HEAD2 = HEAD2->next;
        }
    }
    if (HEAD2 == NULL && HEAD1 != NULL)
    {
        while (HEAD1 != NULL)
        {
            ptr3 = addnode(HEAD1->exp, HEAD1->coeff, ptr3);
            HEAD1 = HEAD1->next;
        }
    }
    if (HEAD1 == NULL && HEAD2 != NULL)
    {
        while (HEAD2 != NULL)
        {
            ptr3 = addnode(HEAD2->exp, HEAD2->coeff, ptr3);
            HEAD2 = HEAD2->next;
        }
    }
    ptr3 = reverse(ptr3);
    return ptr3;
}

void main()
{
    struct Node *HEAD1 = addnode(0, 2, NULL);
    HEAD1 = addnode(1, 3, HEAD1);
    HEAD1 = addnode(2, 4, HEAD1);
    display(HEAD1);

    struct Node *HEAD2 = addnode(0, 1, NULL);
    HEAD2 = addnode(1, 1, HEAD2);
    HEAD2 = addnode(2, 2, HEAD2);
    HEAD2 = addnode(3, 3, HEAD2);
    display(HEAD2);

    struct Node *HEAD3 = addquad(HEAD1, HEAD2);
    display(HEAD3);
}
