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
struct node* Insert_first(struct node*head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node*ptr=head;
    do{
        ptr=ptr->next;
    }
    while(ptr->next!=head);
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=ptr;
    ptr->next=newnode;
    head=newnode;
    return head;
}
struct node* Insert_last(struct node*head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node*ptr=head;
    do{
        ptr=ptr->next;
    }
    while(ptr->next!=head);
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=ptr;
    ptr->next=newnode;
    return head;
}
struct node* Insert_mid(struct node*head,int data,int index)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node*ptr=head;
    struct node*xy=ptr->next;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        xy=xy->next;
        i++;
    }
    newnode->next=xy;
    xy->prev=newnode;
    ptr->next=newnode;
    newnode->prev=ptr;
    return head;

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
    head=Insert_first(head,5);
    traversing(head);
    head=Insert_last(head,70);
    traversing(head);
    head=Insert_mid(head,35,3);
    traversing(head);
    return 0;
}
