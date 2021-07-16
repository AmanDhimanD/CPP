//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *prevnode;
        node *nextnode;
        node(int val)
        {
            data = val;
            prevnode = NULL;
            nextnode = NULL;
        }
};
void insertAtHead(node *&head,int val)
{
    node *n = new node(val);
    n->nextnode = head;
    if(head!=NULL)
    {
        head->prevnode = n;
    }
    head=n;
}
void insertAtTail(node *&head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->nextnode!=NULL)
    {
        temp = temp->nextnode;
    }
    temp->nextnode = n;
    n->prevnode = temp;
    n->nextnode = NULL;
}
void display(node *head)
{
    node *temp = head;
    while(temp->nextnode!=NULL)
    {
        cout << temp->data <<" ";
        temp=temp->nextnode;
    }
    cout << endl;
}

void deleteAtHead(node *&head){
    node *todelete = head;
    head = head->nextnode;
    head->prevnode = NULL;

    delete todelete;
}
void deletion(node *&head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp->nextnode!=NULL && count!=pos)
    {
        temp = temp->nextnode;
        count++;
    }
    temp->prevnode->nextnode = temp->nextnode;
    if(temp->nextnode!=NULL)
    {
        temp->nextnode->prevnode= temp->prevnode;
    }

    delete temp;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    insertAtHead(head, 6);
    display(head);

    deletion(head, 2);
    display(head);
    deleteAtHead(head);
    display(head);

    return 0;
}