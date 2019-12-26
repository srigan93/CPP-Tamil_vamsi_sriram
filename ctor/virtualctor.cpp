#include<iostream>
using namespace std;
class Base
{
public:
//nothing will be here he he he
};
class Derived:public Base
{
public:
  Derived()
  {
    cout<<"Derived created"<<endl;
  }
  Derived(const Derived &ptr)
  {
    cout<<"Derived created virtually"<<endl;
  }
 // ~Derived()
 // {
   // cout<<"Destructor called for derived"<<endl;
 // }
};
int main()
{
  Derived s1;
  Derived s2=s1;
  return 0;
}
