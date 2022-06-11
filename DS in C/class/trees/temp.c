#include <stdio.h>
#include <stdlib.h>
#define max(x,y) (x) > (y) ? (x) : (y)

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create_node(int d){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node*));
    new->data = d;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void in_order(struct Node* r){
    if(r==NULL){
        return;
    }
    in_order(r->left);
    printf("%d ",r->data);
    in_order(r->right);
}

void preOrder(struct Node* n){
    if(n == NULL){
        return;
    }
    printf("%d ",n->data);
    preOrder(n->left);
    preOrder(n->right);
}

void postOrder(struct Node* n){
    if(n==NULL){
        return;
    }
    postOrder(n->left);
    postOrder(n->right);
    printf("%d ",n->data);
}

struct Node* insert_node(struct Node* root,int d){
    if(root==NULL){
        return create_node(d);
    }
    else if(d<root->data){
        root->left  = insert_node(root->left,d);
    }
    else if(d > root->data){
        root->right = insert_node(root->right,d);
    }
    return root;
}

struct Node* b_search(struct Node* root,int d){
    if(root==NULL){
        return NULL;
    }
    else if(d < root->data){
        return b_search(root->left,d);
    }
    else if(d > root->data){
        return b_search(root->right,d);
    }
    else{
        return root;
    }
}

int get_min(struct Node* r){
    if(r->left == NULL){
        return r->data;
    }
    else{
        return get_min(r->left);
    }
}

struct Node* del_node(struct Node* r,int d){
    if(r==NULL){
        return NULL;
    }
    else if(d < r->data){
        r->left = del_node(r->left,d);
    }
    else if(d > r->data){
        r->right = del_node(r->right,d);
    }
    else{
        //case 1: Node to be deleted is a leaf node
        if(r->left == NULL && r->right == NULL){
            free(r);
            return NULL;
        }
        //case 2: Node to be deleted has a child node
        else if(r->right == NULL){
            struct Node* temp = r->left;
            free(r);
            return temp;
        }
        else if(r->left == NULL){
            struct Node* temp = r->right;
            free(r);
            return temp;
        }
        //case 3 : If the Node to be deleted has two child nodes
        else{
            int least = get_min(r->right);
            r->data = least;
            r->right = del_node(r->right,least);
            return r;
        }
    }
    return r;
}

int height(struct Node* r){
    if(r==NULL){
        return 0;
    }
    else{
        int lheight = height(r->left);
        int rheight = height(r->right);
        if(lheight>rheight){
            return lheight+1;
        }
        else{
            return rheight+1;
        }
    }
}

int main(){
    struct Node* root = NULL;
    int n=0,m=0,x=0;
    printf("Enter the number of nodes in your tree: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the data in tree: ");
        scanf("%d",&m);
        root = insert_node(root,m);
    }
    printf("The given tree is: \n");
    in_order(root);
    // printf("\nThe height of the given tree is %d",height(root));
    // printf("\nEnter the element you want to delete: ");
    // scanf("%d",&x);
    // in_order(del_node(root,x));
    return 0;
}
