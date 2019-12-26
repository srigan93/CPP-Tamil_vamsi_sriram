#include<iostream>
using namespace std;
int main()
{
	int a=420,*b,**c;
	b=&a;
	*b=a;
	std::cout<<"the value pointed by single pointer and value "<<b<<" "<<*b<<endl;
	c=&b;
	std::cout<<"The value pointed by double pointer " <<*c<<endl;
	return 0;
}
