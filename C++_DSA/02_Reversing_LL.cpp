//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtend(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtBeg(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
bool searching(node *head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deletionHead(node *&head)
{
    node *begin = head;
    head = head->next;
    delete begin;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deletionHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
//Iterator Method
node* reverse(node* &head)
{
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;

    while (currPtr!=NULL){
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}
// Recurssive Method
node* reverseRecurssive(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* newhead = reverseRecurssive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    insertAtend(head, 1);
    insertAtend(head, 2);
    insertAtend(head, 3);

    display(head);

    // cout << "Itreating Method"<<endl;
    // node* newhead=reverse(head);
    // display(newhead);

    cout << "Recursive Method"<<endl;
    node* newheadRec=reverseRecurssive(head);
    display(newheadRec);

    return 0;
}