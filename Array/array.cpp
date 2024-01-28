#include<iostream>
using namespace std;
void arr()
{
  int n;
  cout<<"Enter the size of array";
  cin>>n;
  int a[n];
  cout<<"Enter the array elements";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"the array is:";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
}
void twoDarr()
{
    int n;
    cout<<"enter the array limit for two d array";
    cin>>n;
    int a[n][n];
    cout<<"Enter the array elements";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"The array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
 // arr();
 twoDarr();
}
