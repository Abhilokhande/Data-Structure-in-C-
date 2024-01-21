#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void traversing(struct node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
struct node* delete_first(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* delete_last(struct node* ptr)
{
    struct node* p=ptr;
    struct node* q=ptr->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
   p->next=NULL;
   free(q);
   return ptr;
}
struct node* delete_between(struct node* ptr,int index)
{
    struct node* p=ptr;
    struct node* q=ptr->next;
    int i=0;
    while(i!=index-1)
    {
      p=p->next;
      q=q->next;
      i++;
    }
    p->next=q->next;
    free(q);
    return(ptr);
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* one=(struct node*)malloc(sizeof(struct node));
    struct node* two=(struct node*)malloc(sizeof(struct node));
    struct node* three=(struct node*)malloc(sizeof(struct node));
    struct node*four=(struct node*)malloc(sizeof(struct node));
    
    head->data=10;
    head->next=one;
    one->data=20;
    one->next=two;
    two->data=55;
    two->next=three;
    three->data=58;
    three->next=four;
    four->data=25;
    four->next=NULL;
    
     traversing(head);
    // head=delete_first(head);
     //cout<<"after deletion"<<endl;
     //traversing(head);
    // cout<<"After deleting the last node:"<<endl;
    // head=delete_last(head);
    // traversing(head);
     cout<<"After deleting at index position(inbetween):"<<endl;
     head=delete_between(head,3);
     traversing(head);
    return 0;
}
