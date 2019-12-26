#include <iostream>
#include <string>

class A
{
public:
    A(int i) : id(i) {}
    void operator()(std::string str) {
	std::cout << "functor A " << str << std::endl;
    }

private:
    int id;
};

int main()
{
    A(2014)("Hello");
}
