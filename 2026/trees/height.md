```
#include <bits/stdc++.h>
using namespace std;
#define null NULL

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
int height(tree* root)
{
    if(root == null)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

vector<int> values = {
    1, 2, 3, -1, -1, 4, -1, -1,
    5, 6, -1, -1, 7, -1, -1
};

int globlIndex = 0;

tree* buildTreeByValues() {
    int data = values[globlIndex++];

    if (data == -1) {
        return null;
    }

    tree* root = new tree(data);

    root->left = buildTreeByValues();
    root->right = buildTreeByValues();

    return root;
}

int main() {
    // tree* root;
    // print(buildTree(root)); // inorder == LNR
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 7 -1 -1
    
    tree* root = buildTreeByValues();
    
    cout<<"Max height of the tree is "<< height(root)<<endl; // ans: 3
    return 0;
} 
```
### Debug
```
int height(tree* root, string type = "", tree* rootValue = null)
{
    if(root == null)
    {
        return 0;
    }
    
    cout<<"Method: "<< type << endl << "Value: "<< root->data<< " of "<<
                                        (rootValue ? to_string(rootValue->data): "root") <<endl;

    int left = height(root->left, "left", root);
    int right = height(root->right, "right", root);
    int ans = max(left, right) + 1;
    return ans;
}

```
