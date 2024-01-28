#include<iostream>
using namespace std;
struct stack{
    int top;
    int size;
    int *arr;
};
int is_full(struct stack*s){
    if(s->top>s->size-1){
        return 1;
    }
    return 0;
}
int is_Empty(struct stack*s){
    if(s->top<=-1){
        return 1;
    }return 0;
}
void push(struct stack*a){
    if(is_full(a)){
        cout<<"The stack is full ,can't push into it::"<<endl;
    }
    else{int value;
        cout<<"Enter the value to push into it:";
        cin>>value;
        a->top=a->top+1;
        a->arr[a->top]=value;
        cout<<"value inserted succ......"<<endl;
    }
}
void pop(struct stack*p){
    if(is_Empty(p))
    {
    cout<<"stact is empty ,cannot pop the element"<<endl;
    }
    else{
        int value=p->arr[p->top];
        p->top=p->top-1;
        cout<<"Pop===="<<value<<endl;
    }
}
void peek(struct stack*p)
{
     if(is_Empty(p))
    {
    cout<<"stact is empty ,cannot peep the elements"<<endl;
    }
    else{
        int value=p->arr[p->top];
        cout<<"Peek===="<<value<<endl;
    }
}
void display(struct stack*p){
    
     if(is_Empty(p))
    {
    cout<<"stact is empty , NO elements in the stack:"<<endl;
    }
    else{while(p->top!=-1){
        cout<<p->arr[p->top]<<endl;
        p->top=p->top-1;
    }
    }
}
void rev_Display(struct stack*p)
{
    if(is_Empty(p))
    {
    cout<<"stact is empty , NO elements in the stack:"<<endl;
    }
    else{
        for(int i=p->top;i>-1;i--){
            cout<<p->arr[i]<<endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    struct stack*s=new stack;
    s->size=50;
    s->top=-1;
    s->arr=new int[s->size];
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
            display(s);
            break;
        case 5:
            rev_Display(s);
            break;
        default:
            break;
        }
    }
}

