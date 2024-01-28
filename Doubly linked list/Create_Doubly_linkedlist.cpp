#include<iostream>
using namespace std;
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
struct node* traversing(struct node* head)
{
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<"--";
        ptr=ptr->next;
    }
    cout<<ptr->data<<endl;

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
    return 0;
}
