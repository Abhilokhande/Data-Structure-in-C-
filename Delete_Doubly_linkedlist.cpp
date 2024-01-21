#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node* search(struct node*head,int a)
{
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        if(ptr->data=a)
        {
            cout<<a<<"found in linkedlist"<<endl;
        }
        ptr=ptr->next;
    }
     if(ptr->data=a)
        {
            cout<<a<<"found in linkedlist"<<endl;
        }
        else
        {
            cout<<"Not exist in the linked list"<<endl;
        }

}
struct node* traversing(struct node*head)
{
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<"--";
        ptr=ptr->next;
    }
     cout<<ptr->data<<endl;
}
struct node* delete_first(struct node*head)
{
    struct node*ptr=head;
    struct node*xy=ptr->next;
    xy->prev=NULL;
    head=xy;
    free(ptr);
    return head;
}
struct node* delete_last(struct node*head)
{
    struct node*ptr=head;
    struct node* xy=ptr->next;
    while(xy->next!=NULL)
    {
        ptr=ptr->next;
        xy=xy->next;
    }
     ptr->next=NULL;
     free(xy);
     return head;
}
struct node*delete_mid(struct node*head,int index)
{
    struct node*a=head;
    struct node* b=a->next;
    struct node*c=b->next;
    int i=0;
    while(i!=index-1)
    {
        a=a->next;
        b=b->next;
        c=c->next;
        i++;
    }
    a->next=c;
    c->prev=a;
    free(b);
    return head;

}
int main(int argc, char const *argv[])
{
     struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* N1=(struct node*)malloc(sizeof(struct node));
    struct node* N2=(struct node*)malloc(sizeof(struct node));
    struct node* N3=(struct node*)malloc(sizeof(struct node));
    struct node* N4=(struct node*)malloc(sizeof(struct node));
    struct node* N5=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->prev=NULL;
    head->next=N1;
    N1->data=20;
    N1->prev=head;
    N1->next=N2;
    N2->data=30;
    N2->prev=N1;
    N2->next=N3;
    N3->data=40;
    N3->prev=N2;
    N3->next=N4;
    N4->data=50;
    N4->prev=N3;
    N4->next=N5;
    N5->data=60;
    N5->prev=N4;
    N5->next=NULL;
    traversing(head);
    search(head,40);
    //head=delete_first(head);
    //ṇṇtraversing(head);
    // head=delete_last(head);
    //traversing(head);
   // head=delete_mid(head,3);
    //traversing(head);
    return 0;
}
