#include <iostream>
#include <map>
#include <string>
#include <utility> 
using namespace std;
 
int main()
{
	typedef map<string, int> mapType;
	mapType ppl_and_year;
 	ppl_and_year.insert(pair<string, int>("Tamil",2011 ));
	ppl_and_year.insert(pair<string, int>("Vamsi", 2017));
	ppl_and_year.insert(mapType::value_type("Sriram", 2017)); 
	//ppl_and_year.insert(mapType::value_type("varma", 2016)); 
	//ppl_and_year.insert(mapType::value_type("Sreekanth",2014));
	mapType::iterator iter = --ppl_and_year.end();
	ppl_and_year.erase(iter);
	cout << "Size of the map " << ppl_and_year.size() << '\n';
 
	for (iter = ppl_and_year.begin(); iter != ppl_and_year.end(); ++iter) {
		cout << iter->first <<": " 
			<< iter->second << " Year\n";
	}
	string Name("Tamil");
	iter = ppl_and_year.find(Name);
	if( iter != ppl_and_year.end() ) 
		cout << Name <<" Joined "
			<< iter->second << " year\n";
	else
		cout << "Key is not in populationMap" << '\n';
	ppl_and_year.clear();
} 

 
