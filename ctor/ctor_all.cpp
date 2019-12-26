#include <iostream>
using namespace std;

class A
{
public:
    A(int n = 0) : m(n) {cout << "ctor\n";}
    A(const A& a) : m(a.m){cout << "copy\n";}
    A& operator=(const A& a) {
	if(this != &a;) m = a.m;
	cout << "assign =\n";
	return *this;
    }
    ~A(){cout << "dtor\n";}
private:
    int m;
};

void foo(const A &a1;, const A &a2; = A()){}

int main()
{
    A a(415);         // ctor
    A b = 7;          // ctor
    A c(a);           // copy
    A &d; = c;          
    A e = b;          // copy
    b = d;            // assign = 
    A *p = new A(c);  // copy
    A *q = &a;         
    foo(911);         // ctor, ctor
    delete p;         // dtor

    return 0;
}
