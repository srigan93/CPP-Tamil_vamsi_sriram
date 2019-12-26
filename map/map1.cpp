#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
  map<int,int> mark1;int ch;
  //random elements added
  mark1.insert(pair<int, int >(1,65));
  mark1.insert(pair<int, int >(2,30));
  map<int, int>::iterator itr;
  std::cout<<"enter the operation you want to do in map\n"<<endl;
  std::cout<<"1.Insertion \n 2. Copy from one map to another \n3. Remove element  by key \n 4.Display \n"<<endl;
  std::cin>>ch;
  if(ch <= 4){
  switch(ch)
  {	
        case 1:
		std::cout<<"insert will come\n";break;
	case 2:
		std::cout<<"copy begins...\n";break;
  	case 3:
		std::cout<<"Remove yet to create\n";break;
        case 4:
   	cout << "\n The mark list contains: \n";
  	cout << "\t S.NO \t Mark\n";
  	for(itr=mark1.begin();itr!=mark1.end();++itr){
  	cout << "\t"  << itr->first << "\t" << itr->second << "\n";
        break;
  }
  }
  }
  else
  {std::cout<<"invalid case";}
  cout<<endl;
  return 0;
}

