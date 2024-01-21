#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void traversing(struct node*head)
{    
    struct node* ptr=head;
    do{
      cout<<ptr->data<<"--";
      ptr=ptr->next;
    }while(ptr->next!=head);
    cout<<ptr->data<<endl;

}
struct node* insertFirst(struct node*head,int data)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node* ptr=head;
    do
    {
       ptr=ptr->next;   /* code */
    }while(ptr->next!=head);
    ptr->next=newnode;
    newnode->next=head;
    return newnode;
}
struct node* insertlast(struct node*head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node* ptr=head;
    do{
        ptr=ptr->next;
    }while(ptr->next!=head);
    ptr->next=newnode;
    newnode->next=head;
    return head;
    
}
struct node * insertmid(struct node*head,int data,int index)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    struct node* ptr=head;
    int i=0;
    while(i!=index-1)
    {
        ptr=ptr->next;
        i++;
    }
    newnode->next=ptr->next;
     ptr->next=newnode;
    return head;
}
int main()
{
   struct node* head=(struct node*)malloc(sizeof(struct node));
   struct node* one=(struct node*)malloc(sizeof(struct node));
   struct node* two=(struct node*)malloc(sizeof(struct node));
   struct node* three=(struct node*)malloc(sizeof(struct node));
   struct node* four=(struct node*)malloc(sizeof(struct node));

   head->data=10;
   head->next=one;
   one->data=20;
   one->next=two;
   two->data=30;
   two->next=three;
   three->data=40;
   three->next=four;
   four->data=50;
   four->next=head;
   traversing(head);
   head=insertFirst(head,100000);
   traversing(head);
   head=insertlast(head,7532);
   traversing(head);
   head=insertmid(head,99999,2);
   traversing(head);
    return 0;
}
