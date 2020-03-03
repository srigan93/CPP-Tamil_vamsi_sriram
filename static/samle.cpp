#include<iostream>
using namespace std;
class sample{
	int a;
	int b;
	public:
	sample(int x=0,int y=0){
	a=x;
	b=y;
	}
	void print(){
	cout<<this->a<<" "<<this->b<<endl;}
};
int main(){

       sample *a= new sample(5,5);
       cout<<" A mem "<<a<<endl;
       
       sample *b;
       b=a;
 
       delete a;
  
       cout<<" B Mem "<<b<<endl;

       a->print();

        sample A(1,2);
	A.print();
        sample &B = A;
        A = NULL;
        //print();
	B.print();
        A.print();
}
