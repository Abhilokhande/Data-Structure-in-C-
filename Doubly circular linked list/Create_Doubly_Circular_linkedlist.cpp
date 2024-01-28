#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node* traversing(struct node*head)
{
    struct node*ptr=head;
    do{
        cout<<ptr->data<<"--";
         ptr=ptr->next;
    }
    while(ptr->next!=head);
     cout<<ptr->data<<endl;
     
}
int main(int argc, char const *argv[])
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*A=(struct node*)malloc(sizeof(struct node));
    struct node*B=(struct node*)malloc(sizeof(struct node));
    struct node*C=(struct node*)malloc(sizeof(struct node));
    struct node*D=(struct node*)malloc(sizeof(struct node));
    struct node*E=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->prev=E;
    head->next=A;
    A->data=20;
    A->next=B;
    A->prev=head;
    B->data=30;
    B->next=C;
    B->prev=A;
    C->data=40;
    C->next=D;
    C->prev=B;
    D->data=50;
    D->next=E;
    D->prev=C;
    E->data=60;
    E->next=head;
    E->prev=D;
    traversing(head);

    return 0;
}
