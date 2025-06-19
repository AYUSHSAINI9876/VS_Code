#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *buildTreeHelper(const vector<int> &preorder, int &index)
{
    if (index >= preorder.size() || preorder[index] == -1)
    {
        index++;
        return NULL;
    }

    Node *root = new Node(preorder[index++]);
    root->left = buildTreeHelper(preorder, index);
    root->right = buildTreeHelper(preorder, index);
    return root;
}

Node *buildTree(const vector<int> &preorder)
{
    int index = 0;
    return buildTreeHelper(preorder, index);
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return max(leftheight, rightheight) + 1;
}
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftnode = countNodes(root->left);
    int rightnode = countNodes(root->right);
    return leftnode+rightnode + 1;
}
int sumNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftsum = sumNodes(root->left);
    int rightsum = sumNodes(root->right);
    return leftsum+rightsum+root->data;
}
void kthlevel(Node*root,int k){
    if(root==NULL)return;
    if(k==1){
        cout<<root->data<<" ";
    return;
    }
    kthlevel(root->left,k-1);
    kthlevel(root->right,k-1);
}
int main()
{
    vector<int> preorder = {1, 2, 7, -1, 3, 4, -1, -1, 5, -1, -1};
    Node *root = buildTree(preorder);
    cout << "height : " << height(root)<<endl;
    cout << "No. of nodes : " << countNodes(root)<<endl;
    cout << "sum of nodes : " << sumNodes(root)<<endl;
    kthlevel(root,3);
    return 0;
}