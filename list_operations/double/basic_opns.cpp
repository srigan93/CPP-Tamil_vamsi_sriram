#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct DllNode
{
  int data;
  int *prev;
  int *next;
};
void insertAtfront(struct DllNode **head,int x)
{
  struct DllNode *cur = new DllNode;
  cur -> data = x;
  cur -> prev = NULL;
  cur -> next = *head;
  if(*head != NULL)
    (*head)->prev = cur;
}
void display(struct DllNode **head)
{
  struct DllNode *temp = *head;
  while(temp != NULL)
  {
    if(temp->next!=NULL)
      cout << temp->data<<"->";
    else
      cout << temp->data;
      temp=temp->next;
  }
  cout<<endl;
}
int main()
{
  struct DllNode *head = NULL;
  insertAtfront(&head,2);
  insertAtfront(&head,4);
  insertAtfront(&head,7);
  cout << "current list is : \n"<<endl;
  display(&head);
}
  
