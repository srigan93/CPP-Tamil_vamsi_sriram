#include <iostream>
class MyClass 
{
public:
     MyClass() { std::cout << "default constructor" << std::endl; }
};

int main(int argc, char** argv)
{
     MyClass* myObjArray = new MyClass[5];
}
