#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;

};
void traversing(struct node*head)
{
    struct node*ptr=head;
    cout<<"[";
    do{
        cout<<ptr->data<<"]--[";
        ptr=ptr->next;
    }while(ptr->next!=head);
    cout<<ptr->data<<"]"<<endl;

}
struct node*deletefirst(struct node*head)
{
    struct node*ptr=head;
    do{
        ptr=ptr->next;

    }
    while(ptr->next!=head);
    ptr->next=head->next;
    //free(ptr);
    return head;
}
struct node*deletelast(struct node*head)
{
    struct node*ptr=head;
    struct node*xy=ptr->next;
    do{
        ptr=ptr->next;
        xy=xy->next;
    }
    while(xy->next!=head);
    ptr->next=xy->next;
    free(xy);
    traversing(head);
}
struct node*deletemid(struct node*head,int index)
{
    struct node*ptr=head;
    struct node*p=ptr->next;
    int i=0;
    do{
        ptr=ptr->next;
        p=p->next;
        i++;
    }while(i!=index-2);
    ptr->next=p->next;
    free(p);
    traversing(head);


}
int main(int argc, char const *argv[])
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
 // head=deletefirst(head);
 //  traversing(head);
  // deletelast(head);
  // traversing(head);
    deletemid(head,2);
    return 0;
}
