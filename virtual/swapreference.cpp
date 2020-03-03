#include <iostream>
#include <cstring>

using namespace std;

template<class T>
void swapRef(T& obj1, T& obj2) {
	T temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}

template<class T>
void swapVal(T obj1, T obj2) {
	T temp = obj1;
	obj1 = obj2;
	obj2 = temp;
}


class Bogo 
{
public:
Bogo (int i = 0, const char *s = "") {
		myInt = i;
		int len = strlen(s);
		myString = new char[len+1];
		strcpy(myString,s);	
	}

Bogo (const Bogo& b){
		int len = strlen(b.myString);
		myString = new char[len + 1];
		strcpy(myString,b.myString);
		myInt = b.myInt;
	}

Bogo operator=(const Bogo& b){
		int len = strlen(b.myString);
		myString = new char[len + 1];
		strcpy(myString,b.myString);
		myInt = b.myInt;
		return *this;
	}

	friend ostream& operator<<(ostream & os, const Bogo & b);

private:
	int myInt;
	char* myString;
};
ostream & operator<<(ostream &os, const Bogo &b) {
	os << b.myInt << "," << b.myString ;
	return os;
}

int main() 
{
	Bogo bogoA = Bogo(100,"AAA"); 
	Bogo bogoB = Bogo(200,"BBB");
	cout << "Value:" << endl;
	cout << "1: "<< bogoA << "   " << bogoB << endl; 
	swapVal<Bogo>(bogoA,bogoB);
	cout << "2: "<< bogoA << "   " << bogoB << endl; 

	cout << endl;

	bogoA = Bogo(100,"AAA"); 
	bogoB = Bogo(200,"BBB");
	cout << "Reference:" << endl;
	cout << "1: "<< bogoA << "   " << bogoB << endl; 
	swapRef<Bogo>(bogoA,bogoB);
	cout << "2: "<< bogoA << "   " << bogoB << endl; 

	return 0;
}
