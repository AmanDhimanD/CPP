/* //#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *left, *right;
};
void printCurLevel(node *root, int level){
    if(root==NULL){
        return;
    }
    if(level==1)
    {
        cout<<root->data<<" ";
    }
    else if(level>1){
        printCurLevel(root->left, level - 1);
        printCurLevel(root->right, level - 1);
    }
}
int height(node *node){
    if( node==NULL){
        return 0;
    }
    else{
        int Lheight = height(node->left);
        int Rheight = height(node->right);
        if(Lheight>Rheight)
        {
            return (Lheight + 1);
        }
        else{
            return (Rheight + 1);
        }
    }

}
node *newNode(int data);
void printLevelOrder(node *root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h;i++)
    {
        printCurLevel(root, i);
    }
}
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Print Tree :- " <<endl;
    printLevelOrder(root);
    return 0;
} */

// USING STL 
//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    struct node *left, *right;

};
void printLevelOrder(node *root){
    if(root==NULL)
        return ;

    queue<node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        node *node = q.front();
        cout<<node->data<<" ";
        q.pop();

        if(node->left!=NULL)
        {
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }
    node *newNode(int data){
        node *temp = new node;
        temp->data=data;
        temp->left = temp->right = NULL;
        return temp;
    }
};
int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}