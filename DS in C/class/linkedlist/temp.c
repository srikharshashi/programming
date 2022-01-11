struct Node
{
    int coeff;
    int expo;
    struct Node *next;
};
struct Node *hptr=NULL;
struct Node *hptr1=NULL;
struct Node *rptr=NULL;
struct Node * add_node(struct Node *h,int c,int e)
{
    struct Node* nptr;
    nptr=(struct Node*)malloc(sizeof(struct Node));
    if(h==NULL)
    {
        h=nptr;
        h->next=NULL;
        h->coeff=c;
        h->expo=e;
        return h;
    }
    else
    {
        nptr->next=h;
        nptr->coeff=c;
        nptr->expo=e;
        h=nptr;
        return h;
    }
}
void display(struct Node *t)
{
    struct Node* temp=t;
    while(t!=NULL)
    {
        if(t->next!=NULL)
        {
          printf("%dX^%d+",t->coeff,t->expo);
        }
        else
        {
            printf("%dX^%d\n",t->coeff,t->expo);
        }
        t=t->next;
    }
}
struct Node* add_poly(struct Node* t1,struct Node* t2)
{   
    struct Node* t3 = rptr;
    while(t1!=NULL && t2!=NULL){
        if(t1->expo == t2->expo){
            t3 = add_node(t3,t1->coeff+t2->coeff,t1->expo);
            t1 = t1->next;
            t2 = t2->next;
        }
        else if(t1->expo>t2->expo){
            t3 = add_node(t3,t1->coeff,t1->expo);
            t1 = t1->next;
        }
        else{
            t3 = add_node(t3,t2->coeff,t2->expo);
            t2 = t2->next;
        }
    }
    while(t1!=NULL){
        t3 = add_node(t3,t1->coeff,t1->expo);
        t1 = t1->next;
    }
    while(t2!=NULL){
        t3 = add_node(t3,t2->coeff,t2->expo);
        t2 = t2->next;
    }
    struct Node* t4 = NULL;
    while(t3!=NULL){
        t4 = add_node(t4,t3->coeff,t3->expo);
        t3 = t3->next;
    }
    return t4;
}
int main()
{
    struct Node * t=add_node(hptr,1,0);
    t=add_node(t,3,1);
    t=add_node(t,4,2);
    t=add_node(t,4,3);
    t=add_node(t,1,5);
    hptr=t;
    display(hptr);
    t=add_node(hptr1,4,0);
    t=add_node(t,7,1);
    t=add_node(t,4,3);
    t=add_node(t,3,4);
    t=add_node(t,5,5);
    hptr1=t;
    display(hptr1);
    rptr = add_poly(hptr,hptr1);
    display(rptr);
}
message.txt
3 KB