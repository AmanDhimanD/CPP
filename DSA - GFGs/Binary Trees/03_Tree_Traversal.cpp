//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
    node(int data)
    {
        this->data=data;
        left = right = NULL;
    }
};
void printPostOrder(struct node *traNode)
{
    if(traNode == NULL)
        return;
    printPostOrder(traNode->left);
    printPostOrder(traNode->right);
    cout << traNode->data << " ";
}
void printInOrder(struct node *traNode)
{
    if(traNode == NULL)
        return;
    printInOrder(traNode->left);
    cout << traNode->data << " ";
    printInOrder(traNode->right);
}
void printPreOrder(struct node *traNode)
{
    if(traNode == NULL)
        return;
    printPreOrder(traNode->left);
    printPreOrder(traNode->right);
    cout << traNode->data << " ";
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    cout<<"\nPreorder :- \n";
    printPreOrder(root);
    
    cout<<"\nInorder :- \n";
    printInOrder(root);
    
    cout<<"\nPostorder :- \n";
    printPostOrder(root);

    return 0;
}