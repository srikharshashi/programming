#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createnode(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int search(struct Node* root,int value)
{
    if(root==NULL)
        return 0;
    else if(root->data==value)
        return 1;
    else if (value>root->data)
        return search(root->right,value);
    else
        return search(root->left,value);
    
}
int searchitr(struct Node* root,int  value)
{
    while(root!=NULL)
    {
        
        if(root->data==value)
            return 1;
        else if(value>root->data)
            root=root->right;
        else
            root=root->left;
    }
    return 0;
}
void main()
{
     //make a root
    struct Node* ROOT=createnode(10);

    //make the other nodes
    struct Node* p6=createnode(6);
    struct Node* p13=createnode(13);
    struct Node* p1=createnode(1);
    struct Node* p8=createnode(8);
    struct Node* p11=createnode(11);
    struct Node* p14=createnode(14);

    //make them connections
    ROOT->left=p6;
    ROOT->right=p13;

    p6->left=p1;
    p6->right=p8;

    p13->left=p11;
    p13->right=p14;

    //a visual represenation of the tree you know
    /*
               10
             /   \
            6     13
           / \   / \
          /   \  /  \
        1     8  11   14
    */
   printf("%d",search(ROOT,14));
}
