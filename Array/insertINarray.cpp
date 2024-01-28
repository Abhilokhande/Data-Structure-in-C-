#include<iostream>
using namespace std;
void insertBig(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int a,b;
    cout<<"Enter the elemt to insert:";
    cin>>a;
    b=arr[0];
    arr[0]=a;
    for(int i=1;i<20;i++)
    {
        int c=arr[i];
        arr[i]=b;
        b=c;

    }
    cout<<"Aftre insertion::::..";
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }


}
void insertLast(int arr[],int n)
{
     cout<<endl;
 for(int i=0;i<n;i++)
    {
       
        cout<<arr[i]<<" ";
    }
      int a;
    cout<<"Enter the elemt to insert:";
    cin>>a;
    arr[n]=a;
     cout<<endl;
     for(int i=0;i<n+1;i++)
    {
       
        cout<<arr[i]<<" ";
    }

}
void insertAt(int arr,int n,int index)
{
    cout<<"Enter the element to insert:";
    cin>>int a;
    for(int i=n-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=a;
}
int main()
{
    int arr[50]={10,20,10,30,10,41,51,62};
    int n=8;
   /* insertBig(arr, n);
    n+=1;
    insertLast(arr,n);
    n+=1;*/
    int index=5;
    insertAt(arr, n, index);
    return 0;
}
