#include <iostream>
#include <string>
using std::cout;
using std::endl;
class Foo
{
 public:
 Foo(int data)
 {
 this->data = data;
 }
 ~Foo(){};
 Foo& operator=(const Foo& rhs)
 {
 data = rhs.data;
 return *this;
 }
 int data;
};
int main()
{
 Foo foo(2); //Foo(int data) called
 Foo foo2(42);
 foo = foo2; // Assignment Operator Called
 cout << foo.data << endl; //Prints 42
}
