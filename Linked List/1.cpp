#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};


int main()
{
    node *head = new node();
    head -> data = 10;

    node *node1 = new node();
    node1 -> data = 20;

    head -> next = node1;

    node *node2 = new node();
    node2 -> data = 30;

    node1 -> next = node2;

    node2 -> next = NULL;

    cout << "Data is : " << head->data << " And " << "Address is : " << head->next << endl; 
    cout << "Data is : " << node1->data << " And " << "Address is : " << node1->next << endl; 
    cout << "Data is : " << node2->data << " And " << "Address is : " << node2->next; 
}