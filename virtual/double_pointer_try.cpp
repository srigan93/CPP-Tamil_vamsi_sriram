#include<iostream>
using namespace std;
int main()
{
  int a=10,*b,**c;
  b=&a;c=&b;
  std::cout<<"value of a \n \n"<<a;
  std::cout<<"\n Address of pointer pointed to A : \n"<<b;
  std::cout<<"\nAddress of pointer B pointed to A (which is pointed to A) \n"<<c;
  std::cout<<"\nvalue of b"<<*b;
  std::cout<<" Value printed by double reference \n" <<c;

	

}
