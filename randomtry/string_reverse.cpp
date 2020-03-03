#include<iostream>
using namespace std;
void Recurse(string &str,int i=0)
{
  //int i=0;
  int n=str.length();
  swap(str[i],str[n-i-1]);
  Recurse(str,i+1);
}
int main()
{ 
  string str="SRIRAM";
  Recurse(str);
  cout<<str;
  return 0;
}
