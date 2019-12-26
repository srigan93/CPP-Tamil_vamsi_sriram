#include<iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
};
struct Node* head = NULL;   
void insert(int new_data) { 
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
   new_node->data = new_data; 
   new_node->next = head; 
   head = new_node; 
} 
int main()
{
  int ch;
  std::cout<<"\n * * * Singly linked list operations * * * \n 1. Insert at front \n 2. Insert at end \n 3. Insert By position \n";
  std::cout<<" 4. Delete at front \n 5. Delete at end \n 6. Delete By Position \n";
  std::cout<<" 7. Display list \n 8. Merge list \n 9. exit \n "<<endl;
  std::cout<<"\n Enter your choice (1-9) : "<<endl;


  return 0;
}
