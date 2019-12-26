#include <fstream>
#include <string>
#include <iostream>
using namespace std ;

int main()
{
	string Names = "Sri\n" ;//Creating string Names
	Names.append( "Tamil\n" ) ;
	Names.append( "Vamsi...\n") ; 
	Names.append( "Are Studying code...\n" ) ;

	ofstream ofs( "theNames.txt" ) ;//creating ofstream object

	if( ! ofs )	{
		cout << "Error opening file for output" << endl ;
		return -1 ;
	} 	
	ofs << Names << endl ;//Best thing :) saving the names into files by using ofs object
	ofs.close() ;// closing connection
	return 0 ;
}
