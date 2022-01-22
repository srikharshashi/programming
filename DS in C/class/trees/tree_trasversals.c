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
void preorder(struct Node* ROOT)
{
    if(ROOT!=NULL)
    {
        printf("%d ",ROOT->data);
        preorder(ROOT->left);
        preorder(ROOT->right);
    }
    else
      return;
    
}
void postorder(struct Node* ROOT)
{
    if(ROOT!=NULL)
    {
        postorder(ROOT->left);
        postorder(ROOT->right);
        printf("%d ",ROOT->data);

    }
    else
      return;
    
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


void main()
{   
    //make a root
    struct Node* ROOT=createnode(0);

    //make the other nodes
    struct Node* p1=createnode(1);
    struct Node* p2=createnode(2);
    struct Node* p3=createnode(3);
    struct Node* p4=createnode(4);
    struct Node* p5=createnode(5);
    struct Node* p6=createnode(6);

    //make them connections
    ROOT->left=p1;
    ROOT->right=p2;

    p1->left=p3;
    p1->right=p4;

    p2->left=p5;
    p2->right=p6;

    //a visual represenation of the tree you know
    /*
               0
             /   \
            1     2
           / \   / \
          /   \  /  \
        3     4  5   6
    */

   //print some results
   printf("POST :  ");
   postorder(ROOT);
   printf("\n");
   printf("PRE :  ");
   preorder(ROOT);
   printf("\n");
   printf("IN :: ");
   inorder(ROOT);
   printf("\n");


}
