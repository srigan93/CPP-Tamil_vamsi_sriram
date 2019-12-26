#include<iostream>
using namespace std;
int main()
{
   int x = 20; 
   switch (x) 
   { 
       case 1: std::cout<<"Choice is 1"; 
               break; 
       case 2: std::cout<<"Choice is 2"; 
                break; 
       case 3: std::cout<<"Choice is 3"; 
               break; 
//       commenting default case to make sure the working of switch
      //default: printf("Choice other than 1, 2 and 3"); 
               // break;   
   } 
   std::cout<<"I was executed \n My value was " <<x<<endl;
   return 0; 
}
