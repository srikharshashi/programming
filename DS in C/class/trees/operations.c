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
struct Node* getmin(struct Node* ROOT)
{
    if(ROOT->right==NULL)
        return ROOT;
    else 
        return getmin(ROOT->right);
}
struct Node* delete(struct Node* ROOT,int value)
{
   if(ROOT==NULL)
        return ROOT;
    
    else if(ROOT->data<value)
        ROOT->right=delete(ROOT->right,value);
    
    else if(ROOT->data>value)
        ROOT->left=delete(ROOT->left,value);  

    else //if its the root value
    {
        if(ROOT->left==NULL)
            return ROOT->right;
        else if(ROOT->right==NULL)
            return ROOT->left;
    

        struct Node* min=getmin(ROOT->left);
        int temp=min->data;
        delete(ROOT,min->data);
        ROOT->data=temp;
    }
    return ROOT;
    

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
    struct Node* ROOT=createnode(4);
    struct Node* p2=createnode(2);
    struct Node* p3=createnode(3);
    struct Node* p1=createnode(1);
    struct Node* p7=createnode(7);


    ROOT->left=p2;
    ROOT->right=p7;

    p2->left=p1;
    p2->right=p3;

    inorder(ROOT);
   ROOT= delete(ROOT,1);
    printf("\n");                                                                                 
    inorder(ROOT);
    // printf("%d node is ",getnode(ROOT,1)->data);


}
