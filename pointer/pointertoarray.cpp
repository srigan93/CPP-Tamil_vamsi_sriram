#include<iostream>
using namespace std;
void geeks()
{
	int tamil[3]={5,8,7};
	int *vamsi;
	vamsi = tamil;
	//vamsi = &tamil;
	std::cout<<"Address of vamsi \n"<<vamsi;
	cout << "Elements in array ";
	std::cout<<*vamsi<<" "<<*vamsi+1<<" "<<*vamsi+2;
	
}
int main()
{
	geeks();
	return 0;
}
