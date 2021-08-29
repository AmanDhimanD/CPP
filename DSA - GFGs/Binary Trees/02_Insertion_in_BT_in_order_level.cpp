//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
node *CreateNode(int data)
{
    node *newN = new node();
    if (!newN)
        cout << "Empty" << endl;
    newN->data = data;
    newN->left = newN->right = NULL;
    return newN;
}

node *insertNode(node *root,int data)
{
    if(root==NULL)
    {
        root = CreateNode(data);
        return root;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop(); //for point to the NULL

        if(temp->left != NULL)

        {
            q.push(temp->left);
        }
        else
        {
            temp->left = CreateNode(data);
            return root;
        }
        if(temp->right != NULL){
    
            q.push(temp->right);
        }
        else
        {
            temp->right = CreateNode(data);
            return root;
        }
    }   
}
void inorder(node *temp)
{
    if(temp==NULL){
        return;
    }
    inorder(temp->left);
    cout << temp->data <<"   ";
    inorder(temp->right);
}
int main()
{
    node *root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);

    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    cout<<"Before the Insertion " <<endl;
    inorder(root);
    cout<<endl;
    int key = 12;
    root = insertNode(root, key);
    inorder(root);
    return 0;
}