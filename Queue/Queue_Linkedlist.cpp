#include<iostream>
using namespace std;
struct node{
   node*prev;
   int data;
   node*next;
};
void Push(node*q)
{  int data;
    cout<<"Enter the element to push::."<<endl;
    cin>>data;
    if(q->data==0){
         q->prev=NULL;
         q->data=data;
         q->next=NULL;
         cout<<"Element inserted at first node....:"<<endl;
    }
    else{
        node*newnode=new node();
        newnode->data=data;
        node*ptr=q;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
        newnode->next=NULL;
        cout<<"Element pushed successfully.........."<<endl;
    }
}
node* Pop(node*q)
{
    node*ptr=q;
    node*abc=ptr->next;
     while(ptr->prev!=NULL)
     {
         ptr=ptr->prev;
         abc=abc->prev;
     }
     abc->prev=NULL;
     cout<<"Element poped success"<<ptr->data<<endl;
     q=abc;
     delete ptr;
     return q;
}
void Peek(node*q){
 node*ptr=q;
 while(ptr->prev!=NULL){
    ptr=ptr->prev;
 }
 cout<<"The peeked element is.....:;"<<ptr->data<<endl;
}
void Display(node*q)
{
   node*ptr=q;
   cout<<"Element in Queue:"<<endl;
   while(ptr->next!=NULL){
      cout<<ptr->data<<endl;
      ptr=ptr->next;
   }
   cout<<ptr->data<<endl;
}
void rev_Display(node*q)
{
     node*ptr=q;
     cout<<"element in reversed order::"<<endl;
     while(ptr->next!=NULL){
        ptr=ptr->next;
     }
     while(ptr->prev!=NULL){
         cout<<ptr->data<<endl;
         ptr=ptr->prev;
     } cout<<ptr->data<<endl;
}
int main(int argc, char const *argv[])
{
    node*q=new node();
    int ch;
    while (ch!=6)
    {
        cout<<"1..push the element in Queue::"<<endl;
        cout<<"2..Pop the element from Queue::"<<endl;
        cout<<"3..Peek element form Queue::"<<endl;
        cout<<"4..Display the Queue Elements::"<<endl;
        cout<<"5..Dislay the Queue in Reverse::"<<endl;
        cout<<"Enter youe choice::"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            Push(q);
            break;
        case 2:
           q=Pop(q);
           break;
        case 3:
           Peek(q);
           break;
        case 4:
           Display(q);
           break;
        case 5:
            rev_Display(q);
            break;
        default:
            break;
        }
    }
    
    return 0;
}
