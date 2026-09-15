```
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
        int data;
        tree* left;
        tree* right;
        tree(int d)
        {
            this->data = d;
            this->left  = NULL;
            this->right = NULL;
        }
};
tree* buildTree(tree* root)
{
    int data;
    cin>>data;
    root = new tree(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void print(tree* root)
{
    if(root == NULL)
    {
        return;
    }
    print(root->left);
    cout<<" " <<root->data<<endl;
    print(root->right);
}
int main() {
    tree* root;
    print(buildTree(root)); // inorder == LNR
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class tree{
    public:
        int data;
        tree* left;
        tree* right;
        tree(int d)
        {
            this->data = d;
            this->left  = NULL;
            this->right = NULL;
        }
};
tree* buildTree(tree* root)
{
    int data;
    cin>>data;
    root = new tree(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void print(tree* root)
{
    if(root == NULL)
    {
        return;
    }
    print(root->left);
    cout<<" " <<root->data<<endl;
    print(root->right);
}
int main() {
    tree* root;
    print(buildTree(root)); // inorder == LNR
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    return 0;
} 
    return 0;
} 
```
