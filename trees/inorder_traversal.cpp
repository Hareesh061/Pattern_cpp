#include<iostream>
#include<vector>
using namespace std;

struct TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val){
            data = val;
            left = right = nullptr;
        }
};

void inorder(TreeNode* root_node, vector<int>& ans){
    if(root_node== nullptr){
        return;
    }

    inorder(root_node->left, ans);

    ans.push_back(root_node->data);

    inorder(root_node->right, ans);

}


int main(){

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(9);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(4);



    vector<int> ans;
    inorder(root, ans);

    for(int val:ans){
        cout<<val<<" ";
    }
return 0;
}