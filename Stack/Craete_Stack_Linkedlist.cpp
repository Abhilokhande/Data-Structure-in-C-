#include<iostream>
using namespace std;
struct  node
{
    int value;
    struct node *next;
};
void push(struct  node*a)
{
   int value;
        cout<<"Enter the number to insert:"<<endl;
         cin>>value;
        if(a->value==0)
        {
            a->next=NULL;
            a->value=value;
            cout<<"The first node created successs ...value inserted.."<<endl;
        }
        else{
            struct node*ptr=new node();
            ptr->value=value;
            while(a->next!=NULL){
                a=a->next;
            }
            a->next=ptr;
            ptr->next=NULL;
            cout<<"Element insert(PUSH) succefully...."<<endl;
        }
     
     
}
void pop(struct node*p)
{
    struct node*ptr=p;
    struct node*a=ptr->next;
    while(a->next!=NULL){
        ptr=ptr->next;
        a=a->next;
    }
     ptr->next=NULL;
     cout<<"pop value="<<a->value<<endl;
     free(a);

}
void rev_Display(struct node*ptr)
{
    struct node*p=ptr;
    while(ptr->next!=NULL){
        cout<<ptr->value<<endl;
        ptr=ptr->next;
    }
        cout<<ptr->value<<endl;
}
void peek(struct node*p){ 
   struct node*ptr=p;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
     cout<<"Peeked(last value/topmost element) value="<<ptr->value<<endl;
}
struct node* display(struct node*head)
{   struct node*p=nullptr;
    struct node*ptr=head;
    struct node*temp=nullptr;

 while(ptr!=nullptr){
   temp=ptr->next;
    temp->next=p;
    p=ptr;
    ptr=temp;
    }  
     head=p;
 return head;
}
int main(int argc, char const *argv[])
{
    struct  node*s=new node();
    int ch;
   while(ch!=6)
    {
        cout<<"1.Push into the stack:"<<endl;
        cout<<"2.Pop from the stack:"<<endl;
        cout<<"3.Peek into the stack:"<<endl;
        cout<<"4.display into the stack:"<<endl;
        cout<<"5.Display reverse:"<<endl;
        cout<<"Enter your choice::"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            push(s);
            break;
        case 2:
            pop(s);
            break;
        case 3:
            peek(s);
            break;
        case 4:
           s=display(s);
           cout<<"Elemnet in the stack:"<<endl;
           rev_Display(s);
            break;
        case 5:
           rev_Display(s);
            break;
        default:
            break;
        }
    }
    
    return 0;
}

