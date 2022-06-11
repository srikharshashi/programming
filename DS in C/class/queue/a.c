#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
};
void main()
{
    struct Node* newnode=(struct Node*)(malloc(sizeof(struct Node)));
    newnode->data=10;

    free(newnode);
    // newnode=NULL;

    printf("%d ",newnode->data);
}
