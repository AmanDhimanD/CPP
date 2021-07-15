//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert(node *&head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head){
    node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *recersionKnode(node *&head,int k){
    node *prevNode = NULL;
    node *currNode = head;
    node *nextNode;

    int count=0;
    while(currNode!=NULL && count<k)
    {
        nextNode = currNode->next;
        currNode->next = prevNode;

        prevNode = currNode;
        currNode = nextNode;
        count++;
    }
    if(nextNode!=NULL)  
    {
        head->next = recersionKnode(nextNode, k);
    }
    return prevNode;
}
int main()
{
    node *head=NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    display(head);

    int key = 2;
    node *newHead = recersionKnode(head, key);

    display(newHead);

    return 0;
}