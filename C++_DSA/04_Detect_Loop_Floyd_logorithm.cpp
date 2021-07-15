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
void insert(node *&head, int val)
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
void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *starNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            starNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = starNode;
}
bool detectCycle(node *&head)
{
    node *slowPtr = head;
    node *fastPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next;

        if (fastPtr == slowPtr)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    display(head);

    makeCycle(head, 2);
    cout<<detectCycle(head)<<endl;

    return 0;
}