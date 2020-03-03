#include<iostream> 
using namespace std; 
  
class GfG 
{ 
   public: 
      
         static void printMsg() 
             { 
                     cout<<"Welcome to GfG!"; 
                         } 
                         }; 
                           
                           // main function 
                           int main() 
                           { 
                               // invoking a static member function 
                                   GfG::printMsg();
                                   GfG obj1;
				   obj1.printMsg(); 
                                   }
