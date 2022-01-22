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
void inorder(struct Node* ROOT)
{
    if(ROOT!=NULL)
    {
        inorder(ROOT->left);
        printf("%d ",ROOT->data);
        inorder(ROOT->right);

    }
    else
      return;
    
}
void insert(int data,struct Node* root)
{
    if(data<root->data)
    {
        if(root->left==NULL)
        {
            root->left=createnode(data);
            return;
        }
        insert(data,root->left);
    }
    else 
    {
        if(root->right==NULL)
        {
            root->right=createnode(data);
            return;
        }
        insert (data,root->right);
    }
}
void main()
{
    struct Node* ROOT=createnode(8);
    struct Node* p2=createnode(5);
    struct Node* p3=createnode(12);
    struct Node* p1=createnode(2);
    struct Node* p7=createnode(7);
    struct Node* p1=createnode(1);
    struct Node* p3=createnode(3);
    struct Node* p4=createnode(4);
    


    ROOT->left=p2;
    ROOT->right=p7;

    p2->left=p1;
    p2->right=p3;

    inorder(ROOT);
    printf("\n");
    insert(9,ROOT);
    inorder(ROOT);

}
