#include<iostream>
#include<stdlib.h>
int main()
{
  int a=10,b=20;
  const int *ptr=&a;
  //*ptr = b;
  std::cout<<"Value pointed by ptr \n" << *ptr;
  
}
