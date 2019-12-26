#include<iostream>
using namespace std;

void fun(int x)
{
    x = 30;
}
 
int main()
{
  int y = 20;
  fun(y);
  std::cout<<y<<endl;
  return 0;
}
