#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node* left;
    struct Node* right;
    int data;

};
struct Node* createnode(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
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
struct Node* getnode(int data,struct Node* ROOT)
{
    if(ROOT->data>data)
       return getnode(data,ROOT->left);
    else if(ROOT->data==data)
        return ROOT;
    else
        return getnode(data,ROOT->right);
}
struct Node* get_min(struct Node* root)
{
    if(root->left==NULL)
    {
        return root;
    }
    get_min(root->left);
}
struct Node* delete(struct Node* ROOT,int data)
{
    if(ROOT==NULL)
        return NULL;

    struct Node* node=getnode(data,ROOT); 
    if(node->left==NULL && node->right==NULL)//0 children
       {
        free(node);
        node=NULL;
        return ROOT;
       } 
    else if(node->left==NULL)//1 child
    {
        struct Node* temp=node->right;//40
        free(node);
        return temp;
    }
    else if (node->right ==NULL)
    {
        struct Node* temp=node->left;//40
        free(node);
        return temp;
    }
    else
    {
        struct Node* n = get_min(node->right);
        node->data = n->data;
        free(n);
    }
 return ROOT;

}
void main()
{
    //tree
    struct Node* ROOT=createnode(50);
    struct Node* p30=createnode(30);
    struct Node* p40=createnode(40);
    struct Node* p60=createnode(60);
    struct Node* p70=createnode(70);
    struct Node* p80=createnode(80);

    ROOT->left=p30;
    ROOT->right=p70;

    p70->left=p60;
    p70->right=p80;

    p30->right=p40;

    inorder(ROOT);
    printf("\n");
    ROOT=delete(ROOT,40);
    inorder(ROOT);
}