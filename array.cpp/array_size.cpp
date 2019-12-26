#include<iostream>
using namespace std;
int main()
{
  int arr[] = {12,14,16,18,44};
  int n = sizeof(arr)/sizeof(arr[0]);
  std::cout<<"The Size of array is \n"<<n<<endl;
  return 0;
}
