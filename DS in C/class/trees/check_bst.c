#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/*
Check whether the given tree is binary Search Tree or not
In a binary tree the left subtree for a given node is always lesser than the right subtree 
that means that each and every node in a binary tree must be compared to its subsequents node to the left and to te right
*/
struct Node
{
    struct Node* left;
    struct Node* right;
    int data;
};
int isbst(int MIN,int MAX,struct Node* root)
{
    // This function recursively checks if the given noe with in the given range
    //for further understanding i would love to expand it in detail
    //1) base condition if you reaf the leaf node and the condition is true then cool its a binary tree 
    //2) if anyy of the nodes donot lie in the given range then its sad and becomes false
    //3) then change the ranges and get their results 
    if(root==NULL)return 1;

    if((root->data>MIN && root->data<MAX))
    {   
        if(isbst(MIN,root->data,root->left) && isbst(root->data,MAX,root->right))
            return 1;
    } 
    else return 0;
}
struct Node* createnode(int data)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void main()
{
    struct Node* ROOT=createnode(13);

    //make the other nodes
    struct Node* p10=createnode(10);
    struct Node* p15=createnode(15);
    struct Node* p7=createnode(7);
    struct Node* p12=createnode(12);
    struct Node* p9=createnode(9);
    struct Node* p8=createnode(8);
    struct Node* p14=createnode(14);
    struct Node* p17=createnode(17);
    struct Node* p16=createnode(16);

    
    //root connections
    ROOT->left=p10;
    ROOT->right=p15;
    //subtree1
    p10->left=p7;
    p10->right=p12;

    p7->right=p9;
    p9->left=p8;

    //subtree 2
    p15->left=p14;
    p15->right=p17;
    p17->left=p16;

    printf("%d\n",isbst(INT_MIN,INT_MAX,ROOT));

    
}
