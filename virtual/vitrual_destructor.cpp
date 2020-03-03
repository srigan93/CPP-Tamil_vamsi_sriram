#include <iostream>

class Base {
    public:
    virtual void method() {std::cout << "from Base" << std::endl;}

    virtual ~Base() {method();}
   // void baseMethod() {method();}
};

class A : public Base {
    void method() {std::cout << "from A" << std::endl;}
public:
    ~A() {method();}
};

int main(void) {
    Base* base = new A;
    base->method();
    delete base;
    return 0;
}
