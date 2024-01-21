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
struct node* Delete_first(struct node*head)
{
    struct node*ptr=head;
    struct node*xy=head;
    do{
        ptr=ptr->next;
    }
    while(ptr->next!=head);
     head=head->next;
     ptr->next=head;
     head->prev=ptr;
     free(xy);
     return head;
}
struct node* Delete_last(struct node*head)
{
    struct node*ptr=head;
    struct node*xy=ptr->next;
    do{
        ptr=ptr->next;
        xy=xy->next;
    }
    while(xy->next!=head);
    ptr->next=head;
    head->prev=ptr;
    free(xy);
    return head;
}
struct node* Delete_mid(struct node*head,int index)
{
    struct node*ptr=head;
    struct node*xy=ptr->next;
    struct node*ab=xy->next;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        xy=xy->next;
        ab=ab->next;
        i++;
    }
    ptr->next=ab;
    ab->prev=ptr;
    free(xy);
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
    head=Delete_first(head);
    traversing(head);
    head=Delete_last(head);
    traversing(head);
    head=Delete_mid(head,2);
    traversing(head);
    return 0;
}
