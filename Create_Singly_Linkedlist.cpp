#include<iostream>
using namespace std;

    struct node
    {
     int data;
     struct node* next;
    };
/*void list()
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

    head->data=10;
    head->next=one;
    one->data=20;
    one->next=two;
    two->data=30;
    two->next=three;
    three->data=40;
    three->next=four;
    four->data=50;
    four->next=NULL;


}*/
void listtraverse(struct node* ptr)
{
    ////visiting every node in the list..............
    cout<<"The value store in linked list are:"<<endl;
    while(ptr!=NULL)
    {
   cout<<ptr->data<<endl;
   ptr=ptr->next;
    }
}
int main(int argc, char const *argv[])
{
     struct node* head;
    struct node* one;
    struct node* two;
    struct node* three;
    struct node* four;
    
    //Allocating mamory to node..........
    head=(struct node*)malloc(sizeof(struct node));
    one=(struct node*)malloc(sizeof(struct node));
    two=(struct node*)malloc(sizeof(struct node));
    three=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));

    //first node next points to the next node................................
    head->data=10;
    head->next=one;
    one->data=20;
    one->next=two;
    two->data=30;
    two->next=three;
    three->data=40;
    three->next=four;
    four->data=50;
    four->next=NULL;

   
   listtraverse(head);
    return 0;
}
 