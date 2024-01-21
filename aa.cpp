#include<iostream>
#include<string>
using namespace std;
 void abc()
    {
        struct a 
        {
            int a=10;
            int b=20;
            int* ac=&a;
            int* bc=&b;
        }xyz;
         cout<<xyz.a<<endl;
          cout<<xyz.b<<endl;
        cout<<xyz.ac<<endl;
        cout<<xyz.bc;
    }
int main()
{
    /*string x,y;
    cout<<"hi how are you"<<endl;
    cout<<"enter your name \n";
    cin>>x;
    cout<<"enter your surname\n";
    cin>>y;
    string z=x.append(y);
    cout<<z<<endl;
    cout<<z.length()<<endl;
    cout<<z[10]<<endl;
    z[10]='m';
    cout<<z;*/
    //string a="abhi";
    //string* ab=&a;
    //cout<<ab;
    abc();
    return 0;

   
}