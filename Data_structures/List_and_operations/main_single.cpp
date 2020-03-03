#include<iostream>
#include"single.cpp"
using namespace std;
int main()
{
    struct node *head = NULL;
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    a.Printlist(head);
    return 0;
}
