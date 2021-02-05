#include <iostream>

using namespace std;

class A 
{
	int value;
public:
        void bigboss3(){ cout << "Sriram is a dumb idiot" << endl;}
	void dumb() const {cout << "dumb()\n";}
	void set(int x) {cout << "set() value \n"<<x<<"\n"; value=x;}
	int get() const {cout << "get()\n"; return value;}
};

int main()
{
	A *pA1 = new A;
	A *pA2 = NULL;//object memory is NULL
   
//	pA1->dumb();
//	pA1->set(10);
//	pA1->get();
        pA2->bigboss3();
	pA2->dumb();
//pA2->set(20);//if we uncomment this program will crash. we cannot set a value to via a NULL Defined object
	pA2->get();

        return 0;
}
