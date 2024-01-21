#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void traversing(struct node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
struct node* insert_Bigining(struct node* head,int data )
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node)); 
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node* insert_between(struct node* head,int data,int index)
{
   struct  node* ptr=(struct node*)malloc(sizeof(struct node));
   struct node* p=head;
   int i=0;
   while(i!=index-1)
   {
     p=p->next;
    i++;
   }
   ptr->data=data;
   ptr->next= p->next;
   p->next=ptr;
   return head;
}
struct node* insert_last(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}
int main()
{
    struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;

    head=(struct node*)malloc(sizeof(struct node));
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));


     head->data=52;
     head->next=one;
     one->data=58;
     one->next=two;
     two->data=5989;
     two->next=three;
     three->data=685;
     three->next=four;
     four->data=5961;
     four->next=NULL;
    traversing(head);
   // head=insert_Bigining(head,9666);
    //traversing(head);
     //head=insert_between(head,55,1);
     //traversing(head);
     cout<<endl<<endl;
     head=insert_last(head,10000);
     traversing(head);
    return 0;
}
