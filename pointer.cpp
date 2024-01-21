#include<iostream>
using namespace std;
void pointer()
{
  int a=10;
  int* b=&a;
  int** c=&b;
  cout<<a<<endl;
  cout<<&a<<endl;
  cout<<b<<endl;
  cout<<*b<<endl;
  cout<<&b<<endl;
  cout<<c<<endl;
  cout<<*c<<endl;
 cout<<**c<<endl;

}
int main(int argc, char const *argv[])
{
    /* code */
    pointer();
    return 0;
}
