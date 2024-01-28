#include<iostream>
using namespace std;
struct Queue{
    int *arr;
     int size;
     int push;
     int pop;
};
int is_Full(Queue*q){
    if(q->push>q->size-1){
        return 1;
    }
    return 0;
}
int is_Empty(Queue*q){
    if(q->pop==q->push){
        return 1;
    }
    return 0;
}
void Push(Queue*q)
{
    if(is_Full(q)){
        cout<<"Queue is full::"<<endl;
    }else{
    int A;
    cout<<"Enter the Element to push into Queue::"<<endl;
    cin>>A;
    q->arr[q->push]=A;
    q->push=q->push+1;
    cout<<"Element PUSH Succesful............"<<endl;
    }
}
void Pop(Queue*q){
    if(is_Empty(q)){
        cout<<"Queue is empty ...Connot Pop the element"<<endl;
    }else{
        int x=q->arr[q->pop];
        q->pop=q->pop+1;
        cout<<"Element pop successfully.........:"<<x<<endl;
    }
}
void Peek(Queue*q)
{
      if(is_Empty(q)){
        cout<<"Queue is empty ...Connot Pop the element"<<endl;
    }else{
        int x=q->arr[q->pop];
        cout<<"Element pop successfully.........:"<<x<<endl;
    }
}
void Display(Queue*q){
      if(is_Empty(q)){
        cout<<"Queue is empty ...NO Elements in Queue....."<<endl;
    }else{
         cout<<"Elements in Queue are...."<<endl;
       for(int i=q->pop;i<q->push;i++)
       {
        cout<<q->arr[i]<<endl;
       }
    }
}
void rev_Display(Queue*q)
{
    if(is_Empty(q)){
        cout<<"Queue is empty ...NO Elements in Queue....."<<endl;
    }else{
         cout<<"Elements in Queue are....(Reversed order)"<<endl;
       for(int i=q->push-1;i>=q->pop;i--)
       {
        cout<<q->arr[i]<<endl;
       }
    }
}
int main(int argc, char const *argv[])
{  
    Queue*q=new  Queue;  
    q->size=50;
    q->arr=new int[q->size];
    q->push=0;
    q->pop=0;
    int ch;
    while(ch!=7){
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
           Pop(q);
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
